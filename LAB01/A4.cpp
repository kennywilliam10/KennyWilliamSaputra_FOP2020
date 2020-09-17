#include <iostream>
using namespace std;

// question no.4 write a c++ program to compute the total and average of three numbers. given numbers: 17,23,49

int main() {

  // first step
  float a = 17, b = 23, c = 49 ;
  float amount ;
  float average ;

  // second step
  amount = a+b+c;

  average = amount/3;

  cout << "17+23+49=" << amount << endl;
  cout << "average=" << average << endl;

  return 0;
} 