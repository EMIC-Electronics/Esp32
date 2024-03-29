#include "inc/userFncFile.h"  //No RFI scan
#include "inc/userVars.h"  //No RFI scan
#include "inc/.{main_includes.*}..h"
#include "src.c.h"  //No RFI scan
#include "userFncFile.c.h"  //No RFI scan

EMIC:setInput(DEV:_hal/.{UC_FAMILY}./system/init.emic)



void setup() {
  
	EMIC:ifdef usedEvent.preInit
	preInit();
	EMIC:endif

	initSystem();
	.{inits.*}.();
	EMIC:ifdef usedEvent.onReset
	onReset();
	EMIC:endif

}

// the loop function runs over and over again forever
void loop() {
  .{polls.*}.();
}
