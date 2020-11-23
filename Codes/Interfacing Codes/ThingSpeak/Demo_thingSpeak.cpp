#include <iostream>
#include <sstream>
#include <fstream>
#include "exploringBB/chp11/thingSpeak/network/SocketClient.h"
#include <unistd.h>

using namespace std;
using namespace exploringBB;

int main()
{
   int i=0;
   for(i=0;i<=20;i++)
   {
      ostringstream head,data;
      cout<<"Starting ThingSpeak Example"<<endl;
      SocketClient sc ("api.thingspeak.com",80);
      data << "field1="<<i<<endl;
      cout<<"Sending the data "<<i<<endl;
      sc.connectToServer();
      head<<"POST /update HTTP/1.1\n"<<"Host: api.thingspeak.com\n"
      <<"Connection: close\n"<<"X-THINGSPEAKAPIKEY:VMCNRV25Y3J1XTOZ\n"
      <<"Content-type: application/x-www-form-urlencoded\n"<<"Content-Length:"
      <<string(data.str()).length()<<"\n\n";
      sc.send (string(head.str()));
      sc.send (string(data.str()));
      string rec=sc.receive(1024);
      cout<<"["<<rec<<"]"<<endl;
      cout<<"End of ThingSpeak Example"<<endl;
      sleep(15);
   }
}
