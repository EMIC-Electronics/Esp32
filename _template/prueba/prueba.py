import webbrowser
import serial

# Obtiene los dispositivos USB conectados.
usb_devices = webbrowser.get_usb_devices()

# Encuentra el conversor TTL a USB.
for usb_device in usb_devices:
    if usb_device['type'] == 'USB_SERIAL':
        port_com = usb_device['port_number']
        break

# Si no se encontró el conversor TTL a USB, muestra un error.
if port_com is None:
    raise ValueError("No se encontró el conversor TTL a USB.")

# Abre el puerto serie.
ser = serial.Serial(port_com, 9600, timeout=1)

# Envia un comando AT al conversor TTL a USB.
ser.write("AT\r\n")

# Lee la respuesta del conversor TTL a USB.
response = ser.readline()

print(response)
