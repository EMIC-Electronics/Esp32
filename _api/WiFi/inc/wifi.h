#ifndef _WI_FI_H_
#define _WI_FI_H_

#include <WiFi.h>
#include <WiFiClient.h>


char WIFI_SSID[32];		/**< Service Set Identifier. */
char WIFI_PASS[32];		/**< AP Password.  */

void initWiFi(void);

void WiFi_connect();	//Connect method.

EMIC:define(inits.initWiFi,initWiFi)

#endif
