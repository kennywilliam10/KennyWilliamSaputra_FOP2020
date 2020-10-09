#include <iostream>
using namespace std;

// Create a C++ program to display the number from 0 to 50. - If the number is the multiple of 3, display “ZIP”.       - If the number is the multiple of 5, display “ZAP”.       - If the number is the multiple of both 3 and 5, display “ZIPZAP”.
 
 int main ()
  {
 // first step
   int number ;
   while (number <=50)
   { 
   if (number %3 == 0 && number %5 == 0 ) {
   cout << "ZIPZAP" << endl;
   }
   else if (number %5 ==0) {
     cout << "ZAP" << endl ;
   } 
  else if (number %3 == 0) {
    cout << "ZIP" << endl ;
  }
  else {
    cout << number << endl ;
  }
  number++ ;
   }
return 0;
   }