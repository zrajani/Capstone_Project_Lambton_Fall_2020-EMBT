/* Program to illustrate the interfacing of BB-WI 
   and IR (Infrared Sensor) and LED  */
   
   // Author: Zain Rajani 
   // Date: Nov. 01, 2020
   
/* Libraries to be included here */

#include <stdlib.h>          // For system(...) command to run some external commands in C Program 
#include <stdio.h>          // For Standard Input Output Function like printf(), scanf() and more
#include <unistd.h>        // For usleep function
#include <iobb.h>         // To access the GPIO pins easily library already downloaded and installed
#include <iostream>      //  For input output cin, cout functions
#include <sstream>      //  string stream classes like ostringstream (output string)
#include <fstream>     //  Read and write file system **Can be ignored as we dont deal with any files
#include "exploringBB/chp11/thingSpeak/network/SocketClient.h"   // Internet Protocol Family Header 

int thingspeak (int count)
{
   ostringstream head,data;
   SocketClient sc ("api.thingspeak.com",80);    // object for API to the ThingSpeak Website using HTTP port 80
   data << "field1="<<count<<endl;               // Data to be sent to the cloud and which feild to store it 
   sc.connectToServer();                        // Connect to the server (request)
   // Use the HTTP methods to get the request sent to the cloud 
   head<<"POST /update HTTP/1.1\n"<<"Host: api.thingspeak.com\n"
   <<"Connection: close\n"<<"X-THINGSPEAKAPIKEY:VMCNRV25Y3J1XTOZ\n"
   <<"Content-type: application/x-www-form-urlencoded\n"<<"Content-Length:"
   <<string(data.str()).length()<<"\n\n";
   // Send Data 
   sc.send (string(head.str()));
   sc.send (string(data.str()));
   sleep(15);
}


int main()
{
  // Variable Declarations;
  int counter=0;
  
  //Initialise the GPIO function libraries 
  iolib_init();
  
  //Set the pin function either as input or output pins
  iolib_setdir(9,15,DigitalIn);
  iolib_setdir(8,11,DigitalOut);
  iolib_setdir(9,41,DigitalIn);

  //Setting initially output pin low 
  pin_low(8,11);         //P8.11 Low (0)
  
  // Loops forever 
  while(1)
  {
     // Check the input value of the pin
    // Condition: If IR Sensor sensed arrival of the letter and brightness is there then 
    if ((is_low(9,15)) && (is_low(9,41)))
    {
      pin_high(8,11);
      system("/usr/bin/python2.7 pysms.py");
      counter++;
      printf("Letter # %d \n",counter);
      thingspeak(counter);     // Call the cloud function created 
      usleep(100000);
   }
    // If no letter is sensed and there is darkness then
    if ((is_high(9,15)) && (is_high(9,41)))
    {
      // If sensor detects no object do nothing only reset the counter if there is darkness and send an alert for removal of the letters 
      counter=0;
      printf("Counter Resetted # %d\n",counter);
      pin_low(8,11);
      system("/usr/bin/python2.7 pysend.py");
      thingspeak(counter);     // Call the function to connect and send data to the cloud 
    }

  }
// Free up the resources like the GPIO pins for other use if required from memory
iolib_free();

return (0);     // If code success then return 0 else -1
}
