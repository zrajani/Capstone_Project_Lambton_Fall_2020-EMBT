// Get the libraries 
#include<stdio.h>        // Input Output Function avaliable 
#include<stdlib.h>      // for the system command standard library 

int main()
{
  system("/usr/bin/python2.7 pysms.py");  // Call the python code to execute
  printf("Message sent");                 // If program excuted then print message 
  return(0);
}
