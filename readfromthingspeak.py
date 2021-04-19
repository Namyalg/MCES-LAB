!pip install thingspeak
#the colab file can be found at : https://colab.research.google.com/drive/1ZNGKINk-RZElxgdz0dKF4cS08NozdFaF?usp=sharing

from urllib.request import urlopen

import ast

while True:
  
  #this reads from a public chqnnel, so u dont really need an API key as it is made into a public channe;l
  
  #this runs infinitely
  
  
  byte_str = urlopen("https://api.thingspeak.com/channels/1363160/fields/1.json?results=2").read()
  
  //add data is received as a byte string here from the api response
  
 
  dict_str = byte_str.decode("UTF-8")
  
  //the byte strin is decode to UTF 8 and then the values are obtained
  
  mydata = ast.literal_eval(dict_str)
  //convert the encoded string to a dictionary so the contents so the contents can be read
  
  
  dt = repr(mydata)
  res = ast.literal_eval(dt)

  last_val = res["feeds"][-1]["field1"]
  
  #this is to get the values of the respective fileds with the indeices
  
  
  print("The value of the soil read is ", last_val)
  time.sleep(15)
