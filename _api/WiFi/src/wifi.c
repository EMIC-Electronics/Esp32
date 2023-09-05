void initWiFi() {

  WRITE_PERI_REG(RTC_CNTL_BROWN_OUT_REG, 0); //disable brownout detector
 
  Serial.begin(115200);  
}

void WiFi_connect()
{
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  
  Serial.println("Connecting Wifi...");
  while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.println("Connecting to WiFi..");
      
  }
  Serial.println("IP address: ");
      
  Serial.println(WiFi.localIP());
}