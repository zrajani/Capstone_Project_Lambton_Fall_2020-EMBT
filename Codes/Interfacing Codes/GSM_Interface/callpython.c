#include<stdio.h>
#include<stdlib.h>     // Used for system() function

int main()
{
   system("/usr/bin/python2.7 pysms.py");     // Calling the python script anyother script or command can be called in this way
   printf("Message sent");                   // Acknowledgement message if you wish to print
   return(0);                               // Mark the successful execution of the program
}
