void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

//single LED which can be used to indicate different colors
//RGB LED's have 4 leads, 1 is cathode to groumd
//there are 3 anodes
//blue, green, red anode -> can take 0 to 5 volts

//if only red connected then 0 to 255 i.e 2**8 
//if only blue then 0 to 255 2**8
//if only green then 0 to 255 , 2**8

//generate 2**24 colors
void loop()
{
  for(int i = 0; i <= 255; i++){
  	analogWrite(5, i);
    analogWrite(3, i);
    analogWrite(6, i);
    //digitalWrite(1, i);
  }
  //digitalWrite(13, HIGH);
  //delay(1000); // Wait for 1000 millisecond(s)
  //digitalWrite(13, LOW);
  //delay(1000); // Wait for 1000 millisecond(s)
}
