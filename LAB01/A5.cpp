#include <iostream>
using namespace std;
  
  // question no.5 write a c++ program to difine time value in 24 hour clock system into 12 hour clock system. given 14.00 21.00 

  int main() {

    // first step
     int time1 = 14;
     int time2 = 21;
     int clock1 = time1 % 12;
     int clock2 = time2 % 12;

     //second step
     
     cout << clock1 << "pm" << endl;
     cout << clock2 << "pm" << endl;

     return 0 ;

  }
   