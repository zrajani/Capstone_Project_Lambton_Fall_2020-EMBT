/* Program to illustrate the interfacing of BB-WI 
   and IR (Infrared Sensor) and LED  */
   
   // Author: Zain Rajani 
   // Date: Nov. 01, 2020
   
/* Libraries to be included here */

#include <stdio.h>
#include <unistd.h>      // For usleep function
#include <iobb.h>       // To access the GPIO pins easily library already downloaded and installed

int main()
{
  // Variable Declarations;
  int counter=0;
  
  //Initialise the GPIO function libraries 
  iolib_init();
  
  //Set the pin function either as input or output pins
  iolib_setdir(9,15,DigitalIn);
  iolib_setdir(8,11,DigitalOut);
  
  //Setting initially output pin low 
  pin_low(8,11)         //P8.11 Low (0)
  
  // Loops forever 
  while(1)
  {
    // Check the input value of the pin 
    if (is_low(9,15))
    {
      pin_high(8,11);
      system("/usr/bin/python2.7 pysms.py");  // Call the python code to execute
      counter++;
      printf("Letter # %d/n",counter);
      usleep(120000);                  // Suspend the process for the given duration 
    }
    if (is_high(9,15))
    {
      // If sensor detects no object do nothing
    }
  }
  
// Free up the resources like the GPIO pins for other use if required from memory
iolib_free();

return (0);     // If code success then return 0 else -1

}
