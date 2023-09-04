#include "ESP32_FTPClient.h"

#include "NTPClient.h" //For request date and time

#include <WiFiUdp.h>
#include "time.h"

char ftp_server[] = "192.168.0.57";     /**< FTP server URL.  */
char ftp_user[]   = "anonymous";        /**< FTP user.  */
char ftp_pass[]   = "";                 /**< FTP password.  */
char ftp_path []  = "/";                /**< FTP path.  */



void initFTP(void);

#setFile temp/EMICinits.c
	initFTP();
#unSetFile
