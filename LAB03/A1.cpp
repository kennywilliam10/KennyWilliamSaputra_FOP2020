#include <iostream>
using namespace std;

// question no.1 Write a C++ program to checkvwhether the user input is an even or odd number.

// first step
int main() {
  int number, remainder ;

  // second step
  cout << "what's your number :";
  cin >> number ;

  remainder = number % 2;
  if (remainder ==0)
  cout << number << " is even" << endl;
  else 
  cout << number << " is odd" << endl ;

  return 0;


}
