EMIC:setInput(DEV:_hal/.{UC_FAMILY}./system/init.emic)

#include "inc/main.h"

//--------- includes_target ---------------------------------
#include "inc/.{includes_target.*}..h"

//--------- includes in main.c ---------------------------------
#include "inc/userFncFile.h"
//#include "inc/userVars.h"
#include "src/userFncFile.c.h"

//--------- includes_src ---------------------------------
#include "src/.{includes_src.*}..c.h"

//--------- code in main.c ---------------------------------
void setup()
{
	initSystem();
	EMIC:ifdef usedEvent.SystemConfig
	SystemConfig();
	EMIC:endif
	.{inits.*}.();
	EMIC:ifdef usedEvent.onReset
	onReset();
	EMIC:endif

}

// the loop function runs over and over again forever
void loop()
{
	.{polls.*}.();
}
