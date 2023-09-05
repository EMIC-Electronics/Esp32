void initFTP()
{
      ftp.OpenConnection();
}

void ftpUploadImage()
{

      
  /*
   * Upload to ftp server
   */
  

  ftp.ChangeWorkDir(ftp_path);
  ftp.InitFile("Type I");

  String nombreArchivo = timeClient.getFullFormattedTimeForFile()+".jpg"; // AAAAMMDD_HHMMSS.jpg
  //String nombreArchivo = "x123.jpg"; // AAAAMMDD_HHMMSS.jpg  
  Serial.println("Subiendo "+nombreArchivo);
  int str_len = nombreArchivo.length() + 1; 
 
  char char_array[str_len];
  nombreArchivo.toCharArray(char_array, str_len);
  
  ftp.NewFile(char_array);
  ftp.WriteData( fb->buf, fb->len );
  ftp.CloseFile();
  
  /*
   * Free
   */
  esp_camera_fb_return(fb); 


}