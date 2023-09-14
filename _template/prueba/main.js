// Conectar al servidor WebSocket
const socket = new WebSocket('ws://localhost:3000');
var port;
var writer;
var reader;
document.addEventListener('DOMContentLoaded', () => {
    const programarButton = document.getElementById('programar');
  
    // Manejar la carga de archivos binarios
    
    // Manejar el evento de programación
    programarButton.addEventListener('click', async () => {
      
      try {
        // Solicitar al usuario que seleccione el puerto serie
        port = await navigator.serial.requestPort();
        await port.open({baudRate: 115200})
        console.log('Conectado al puerto serie:', port);
        writer = port.writable.getWriter();
        reader = port.readable.getReader();
        socket.send("programarEsp32:");                            //Envio el mensaje para programar.
      } catch (error) {
        console.error('Error al solicitar el puerto serie:', error);
        alert('Error al solicitar el puerto serie. Verifica que el dispositivo esté conectado y configurado correctamente.');
      }
    });
  });


// Manejar eventos de la conexión WebSocket
socket.addEventListener('open', (event) => {
  console.log('Conectado al servidor WebSocket.');
});

socket.addEventListener('message', (event) => {
  const mensaje = event.data;
  if (mensaje.toString().startsWith('datosParaEsp32:')){
    const data = mensaje.toString().split(':')[1];
    // Llamar a la función para enviar los datos al ESP32
    enviarDatosAlEsp32(data);  
  }
  // Aquí puedes procesar el mensaje recibido del servidor y actualizar la página según sea necesario.
});

socket.addEventListener('close', (event) => {
  console.log('Desconectado del servidor WebSocket.');
});

async function enviarDatosAlEsp32(datos) 
{
  try {
    const textEncoder = new TextEncoder();
    await writer.write(textEncoder.encode(datos).buffer);
    console.log(textEncoder.encode(datos).buffer);
    await recibirDatosDelEsp32();
    //writer.releaseLock();
  } catch (error) {
    console.error(`Error al enviar datos al ESP32 a través del puerto ${port}: ${error.message}`);
  }
};

async function recibirDatosDelEsp32() {
  try {
    const { value, done } = reader.read();
    if (!done) {
      const datosRecibidos = new TextDecoder().decode(value);
      const textEncoder = new TextEncoder();
      // Enviar los datos recibidos al servidor a través de WebSocket
      socket.send(`respuestaESP32:${datosRecibidos}`);
      console.log(textEncoder.encode(datosRecibidos).buffer);
    }
  } catch (error) {
    console.error(`Error al recibir datos del ESP32 a través del puerto serie: ${error.message}`);
  }
};