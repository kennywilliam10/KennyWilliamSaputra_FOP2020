#include <iostream>
using namespace std;

// question no.3 write a c++ program to swap the value of the variable and print the result given variable: a=7 b=4 expected output: a=4 b=7

int main() {

  // first step
  int a=7;
  int b=4;
  int c;
   
  // second step
  c=a;
  a=b;
  b=c;

  cout << "a=" << a << " b=" << b << endl;

  return 0; 
}