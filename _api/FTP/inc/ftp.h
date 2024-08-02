EMIC:setInput(../ESP32_FTPClient.h)
EMIC:setInput(../NTPClient.h)
#include <WiFiUdp.h>EMIC:setInput(time.h)
ESP32_FTPClient ftp(.{ftp_server}., .{ftp_user}., .{ftp_pass}.);WiFiUDP udp_conn;NTPClient FTP_timeClient(udp_conn);char ftp_path []  = "/";                /**< FTP path.  */void initFTP(void);