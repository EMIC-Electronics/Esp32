EMIC:ifndef __WEBSERVER_H__
#define __WEBSERVER_H__

#include <HTTPClient.h>
#include "../NTPClient.h"
#include <WiFiUdp.h>

HTTPClient http;
WiFiUDP ntpUDP;
NTPClient HTTP_timeClient(ntpUDP);

char HTTP_URL[] = "https://6mrlm5o8fa.execute-api.us-east-1.amazonaws.com/Prod/classify_digit"; /**< URL where the photo will be uploaded. */

void HTTPInit(void);

void HTTPUploadImage();

EMIC:endif