#include "userFncFile.h"  //No RFI scan
#include "inc/userVars.h"  //No RFI scan
#include "src.c.h"  //No RFI scan
#include "userFncFile.c.h"  //No RFI scan

EMIC:setInput(SYS:_hal/.{UC_FAMILY}./system/init.emic)



void setup() {
  
	EMIC:ifdef usedEvent.preInit
	preInit();
	EMIC:endif

	initSystem();
	EMIC:setInput(temp/EMICinits.c.h)
	EMIC:ifdef usedEvent.onReset
	onReset();
	EMIC:endif

}

// the loop function runs over and over again forever
void loop() {


  EMIC:setInput(temp/EMICpolling.c.h)

}
