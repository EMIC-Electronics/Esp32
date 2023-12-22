import requests
import hashlib
import subprocess
from chrome.serial import connect, write


def get_md5sum(filename):
    """
    Obtiene el hash MD5 de un archivo.

    Args:
        filename: El nombre del archivo que se desea hashear.

    Returns:
        El hash MD5 del archivo.
    """

    command = "md5sum {}".format(filename)
    p = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE)
    output, err = p.communicate()
    return output.decode("utf-8").strip()


with open("./target.bin", "rb") as f:
    data = f.read()

hash_file = get_md5sum("./target.bin")

# Puerto USB del ESP32
port = "/dev/ttyUSB0"

# Velocidad de comunicación del puerto USB
baudrate = 115200

# Conecta el ESP32 a Chrome
connection = connect(port, baudrate)

# Solicita el inicio de la actualización
write(connection, "AT+UPDATE\r\n")

# Lee la respuesta del ESP32
response = write(connection)

# Si la respuesta es "OK", el ESP32 está listo para recibir el firmware
if response == "OK":

    # Descarga el archivo de firmware
    response = requests.get(url)

    # Calcula el hash del archivo descargado
    hash_downloaded = hashlib.sha256(response.content).hexdigest()

    # Si el hash del archivo descargado coincide con el hash proporcionado, el archivo es válido
    if hash_downloaded == hash_file:

        # Envia el archivo de firmware al ESP32
        write(connection, response.content)

        # Espera a que el ESP32 termine de instalar el firmware
        while write(connection) != "READY":
            pass

        # Reinicia el ESP32
        write(connection, "AT+REBOOT\r\n")
    else:
        print("El archivo de firmware no es válido.")
else:
    print("El ESP32 no está listo para recibir el firmware.")
