#interface rpi and upload to thingspeak
#no analog input output in rpi, so uses an ADC

#here use a board that 
#dht11, digital sensor, measurement is done inside the sensor and data in digital is given out
#has 3 pins, Vcc, Data, Ground

#the middle pin gives humidity and temperature, to get the temperatur and the humidity
#it is a single sensor, but can do both the functions

#capacity humidty sensor, calculate humidity based on resistance difference between its electordes
#has a thermistor inside, this is for temperature

#very low pwer consumption DHT11 lower, DHT22 higgher

#40 bits data is given

#first 16 -> humidity
#second 16 -> temperature
#the last 8 bits its to check for the integrity of the data

#code in the gallery for the 
