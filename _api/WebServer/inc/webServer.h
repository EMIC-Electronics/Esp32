#ifndef _WEB_SERVER_H_
#define _WEB_SERVER_H_

#include <HTTPClient.h>
#include "../NTPClient.h"
#include <WiFiUdp.h>

HTTPClient http;
WiFiUDP ntpUDP;
NTPClient HTTP_timeClient(ntpUDP);

// "https://6mrlm5o8fa.execute-api.us-east-1.amazonaws.com/Prod/classify_digit"
// "https://cfsbzdkbw9.execute-api.us-east-1.amazonaws.com/Prod/classify_digit"
// "https://anrbu36ybh.execute-api.us-east-1.amazonaws.com/Prod/classify_digit"

char HTTP_URL[] = "https://anrbu36ybh.execute-api.us-east-1.amazonaws.com/Prod/classify_digit"; /**< URL where the photo will be uploaded. */
                  
void HTTPInit(void);

void HTTPUploadImage();

#endif