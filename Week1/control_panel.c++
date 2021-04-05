void setup()
{
  //green
  pinMode(7, OUTPUT);
  
  //switch
  pinMode(2, INPUT);
  
  //red
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}


//in this expt once the button is red bulbs toggle and blink
//while on switch on the green bulb toggles alone
void loop()
{
  if(digitalRead(2) == LOW){
  	digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(7, HIGH);
  	delay(1000); // Wait for 1000 millisecond(s)
  	digitalWrite(7, LOW);
  	delay(1000); // Wait for 1000 millisecond(s)
  }
  else if (digitalRead(2) == HIGH){
  	digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  	//digitalWrite(7, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  	delay(1000);
  }
}
