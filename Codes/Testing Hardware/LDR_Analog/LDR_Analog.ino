void setup()
// This loop runs only once 
{

Serial.begin(9600); // Set the Baud rate of the arduino 

}

void loop()
// This loop continuously iterates 
{

unsigned int AnalogValue;  // Variable Declaration 

AnalogValue = analogRead(A0); // Read the sensor/ pin value at A0

Serial.println(AnalogValue); // Print the sensor/ pin value on a new line

}
