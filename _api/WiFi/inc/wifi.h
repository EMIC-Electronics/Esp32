#include <WiFi.h>
#include <WiFiClient.h>

//const char* WIFI_SSID = "TeleCentro-7118"; 
//const char* WIFI_PASS = "boxitracio";


char WIFI_SSID[32];		/**< Service Set Identifier. */
char WIFI_PASS[32];		/**< AP Password.  */

void initWiFi(void);

void WiFi_connect();	//Connect method.

#setFile temp/EMICinits.c
	initWiFi();
#unSetFile
