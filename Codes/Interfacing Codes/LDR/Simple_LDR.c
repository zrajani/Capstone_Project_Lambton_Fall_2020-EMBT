// Include Required Libraries
#include <stdio.h>
#include <unistd.h>
#include <iobb.h>

// Main Code
int main()
{
   // In itialise IO Library
   iolib_init();
   
   //Set the direction of pins
   iolib_setdir(9,41,DigitalIn);
   
   // Forever Looping
   while(1)
   {
      // Loops to check the status of the pins and give outputs appropriately
      
      if(is_low(9,41))     // If Brightness present
      {
         printf("Pin low\n");
         usleep(3000); // Suspends all the processes 
       }
       if(is_high(9,41))
       {
          printf("Pin High\n");
          usleep(3000);  // Suspends all the processes 
       }
   }
   
   // Free up the pins and memory
   iolib_free();
   return(0);    // If program runs successfully 
}
