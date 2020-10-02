#include <iostream>
using namespace std;

//Write a C++ program to ask the month and year by user input and display the last day of the month using switch case. (Example: February 2020 has 29 days) Notes: Also check for the leap year

int main() {

// first step
int month;
int year;
cout << "what month do you want :" << endl;
cin >> month;
cout << "what year do you want :" << endl;
cin >> year;

switch (month){

  // second step
  case 1 :
    cout << "jauary, " << "it is 31 days";
    break;

  case 2 :
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
      cout << "february, " << "it has 29 days"<< endl;
      }
    else {
      cout << "february, " << "it has 28 days" << endl;
    }
      break;

  case 3 :
    cout << "march, " << "it has 31 days";
    break;
  
  case 4 :
    cout << "april, " << "it has 30 days";
    break;

  case 5 :
    cout << " may, " << "it has 31 days";
    break;

  case 6 :
    cout << " june, " << "it has 30 days";
    break;

  case 7 :
    cout <<  "july, " << "it has 31 days";
    break;

  case 8 :
    cout << " august, " << "it has 30 days";
    break;

  case 9 :
    cout << " september, " << "it has 31 days";
    break;

  case 10 :
    cout << " october, " << "it has 30 days";
    break;
  
  case 11 :
    cout << " november, " << "it has 31 days";
    break;
  
  case 12 :
    cout << " december, " << "it has 30 days";
    break;

// third step
  default :
    cout << "wow you are in the other planet";
    break;

}

return 0;
}

