// Project 38 - Controlling the Motor


void setup() 
{
  pinMode (5, OUTPUT);  // digital pwm output pin
  pinMode (A5, INPUT);  // analog in pin
  Serial.begin(9600);   
}



void loop() 
{
  // below from original code
  //for (int a = 0; a < 256; a++)

  int a = analogRead (A5) / 7;    // set scale compatible with motor range
  a = a + 100;     // set minimum out
  {
    analogWrite (5, a);
    delay (100);
    Serial.print (a);   // added serial monitor
    Serial.println ();
  }
  delay (50);       // reduced from 5000 for quicker response time


//  below from original code
  /*for (int a = 255; a >= 0; a--)
  {
    analogWrite (5, a);
    delay (100);
  }
  delay (5000);*/
}
