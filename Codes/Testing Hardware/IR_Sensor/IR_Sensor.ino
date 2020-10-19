const int ProxSensor = 2;
int inputVal = 0;

void setup()
{
  pinMode(13, OUTPUT);          // Pin 13 has an LED connected on most Arduino boards:
  pinMode(ProxSensor, INPUT);   //Pin 2 is connected to the output of proximity sensor
  Serial.begin(9600);           // Baud Rate of the Arduino
}

void loop()
{
  if (digitalRead(ProxSensor) == HIGH)   //Check the sensor output
  {
    digitalWrite(7, HIGH);              // set the LED on
  }
  else
  {
    digitalWrite(7, LOW);               // set the LED off
  }
  inputVal = digitalRead(ProxSensor);  // Read the pin 2
  Serial.println(inputVal);           // Print the value of pin 2
  delay(100);                        // wait for 0.1 second
}
