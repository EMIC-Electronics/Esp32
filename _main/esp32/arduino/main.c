<<<<<<< HEAD
// Archivo Fuente Principal: Aqui empezara a generar el fuente

=======
>>>>>>> 2f279fd76599a4d6bd29a26d8292313d97fca4d0
#include "userFncFile.h"  //No RFI scan
#include "inc/userVars.h"  //No RFI scan
#include "src.c.h"  //No RFI scan
#include "userFncFile.c.h"  //No RFI scan

#newRFIcode(_hal/.{UC_FAMILY}./system/init.emic)



void setup() {
  
<<<<<<< HEAD
  // initialize digital pin LED_BUILTIN as an output.
  //pinMode(LED_BUILTIN, OUTPUT);
=======
	#ifdef event_preInit_active
	preInit();
	#endif
>>>>>>> 2f279fd76599a4d6bd29a26d8292313d97fca4d0

	initSystem();
	#newRFIcode(temp/EMICinits.c.h)
	#ifdef event_onReset_active
	onReset();
	#endif

}

// the loop function runs over and over again forever
void loop() {


  #newRFIcode(temp/EMICpolling.c.h)

}
