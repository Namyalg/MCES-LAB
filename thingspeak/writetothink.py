while True:
  
  #writing can be a operaion only if api key is present
  
  #so as a result, u need to get ur api key from the website and use this to post the content                                          
  soil_moisture = random.randint(0, 1024)
  print("The soil moisture is ", soil_moisture)
  
  
  #post api call to put data to the cloud
  write_url = urlopen("https://api.thingspeak.com/update?api_key=JHM5I1TQY2FKHJ6J&field1=0" + str(soil_moisture))
  print(write_url)
  time.sleep(15)
