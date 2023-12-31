#include "../ESP32_FTPClient.h"

#include "../NTPClient.h" //For request date and time

#include <WiFiUdp.h>
#include "time.h"

ESP32_FTPClient ftp(.{ftp_server}., .{ftp_user}., .{ftp_pass}.);
WiFiUDP udp_conn;
NTPClient FTP_timeClient(udp_conn);

char ftp_path []  = "/";                /**< FTP path.  */

void initFTP(void);
