#include "userFncFile.h"  //No RFI scan
#include "inc/userVars.h"  //No RFI scan
#include "src.c.h"  //No RFI scan
#include "userFncFile.c.h"  //No RFI scan

#newRFIcode(_hal/.{UC_FAMILY}./system/init.emic)



void setup() {
  
	#ifdef event_preInit_active
	preInit();
	#endif

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
