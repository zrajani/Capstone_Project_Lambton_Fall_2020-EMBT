#include <SoftwareSerial.h>

SoftwareSerial mySerial(9, 10);

void setup()
{
  mySerial.begin(9600);   // Setting the baud rate of GSM Module  
  Serial.begin(9600);    // Setting the baud rate of Serial Monitor (Arduino)
  delay(5000);
}


void loop()
{
  if (Serial.available()>0) // If buffer has something 
   switch(Serial.read())
  {
    case 's':
      SendMessage();      // When 's' typed in Serial Monitor send message 
      break;
    case 'r':
      RecieveMessage();  // When 'r' typed in Serial Monitor recieve message 
      break;
  }

 if (mySerial.available()>0)
   Serial.write(mySerial.read());
}


 void SendMessage()
{
  mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(5000);                     // Delay of 5000 milli seconds or 5 second
  mySerial.println("AT+CMGS=\"+16477868334\"\r"); // Replace x with mobile number
  delay(5000);
  mySerial.println("Welcome Zain, Are you looking for letters?");// The SMS text you want to send
  delay(5000);
   mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(5000);
}


 void RecieveMessage()
{
  mySerial.println("AT+CNMI=2,2,0,0,0"); // AT Command to receive a live SMS
  delay(5000);
 }
