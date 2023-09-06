#ifndef __WEBSERVER_C__
#define __WEBSERVER_C__

void HTTPInit(void)
{
    HTTP_timeClient.begin();
    HTTP_timeClient.update();
}

void HTTPUploadImage(void)
{
    http.begin(HTTP_URL);
    http.addHeader("Content-Type", "image/jpeg");
    http.sendRequest("POST", fb->buf, fb->len);
    http.end();
    esp_camera_fb_return(fb);
}

#endif