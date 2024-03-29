void HTTPInit(void)
{
    HTTP_timeClient.begin();
    HTTP_timeClient.update();
}

void HTTPUploadImage(void)
{
    http.begin(HTTP_URL);
    http.addHeader("Content-Type", "image/jpeg");
    http.addHeader("topic", "user/proj");
    http.sendRequest("POST", fb->buf, fb->len);
    Serial.println(http.getString());
    http.end();
    esp_camera_fb_return(fb);
}
