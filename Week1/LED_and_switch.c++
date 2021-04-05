void setup()
{
        
        //this is done only once, following which the loop function runs forever
        pinMode(7, OUTPUT);
        pinMode(2, INPUT);
}

void loop()
{

        //here a switch is used, and a pull down resistor is used to get the voltage to 0 or 5
        //the pulldown resistor immediately gets the value of the voltage to 0
        //and the value is read from that
        //if it is high then it glows else it does not work

      if(digitalRead(2) == HIGH){

            //this is to glow a basic LED
            digitalWrite(7, HIGH);
            delay(1000); // Wait for 1000 millisecond(s)
            digitalWrite(7, LOW);
            delay(1000); // Wait for 1000 millisecond(s)

    }
}
