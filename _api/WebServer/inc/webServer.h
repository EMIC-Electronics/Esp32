#ifndef __WEBSERVER_H__
#define __WEBSERVER_H__

#include <HTTPClient.h>
#include <NTPClient.h>
#include <WiFiUdp.h>

HTTPClient http;
WiFiUDP ntpUDP;
NTPClient HTTP_timeClient(ntpUDP);

char MQTT_TOPIC[32] = "usrr/prroj";                            /**< TOPIC where the photo and inferences will be posted. */
//char HTTP_URL[128] = "http://image-classifier.emic.io/predict"; /**< URL where the photo will be uploaded. */

char HTTP_URL[128] = .{modelo}.; /* URL where the photo will be uploaded. */


void HTTPInit(void);

void HTTPUploadImage();

#endif
