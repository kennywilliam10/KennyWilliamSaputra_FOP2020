#include <iostream>
using namespace std;

// question no.1: Write a C++ program to print the result of arithmatic operation between two numbers. given numbers : 12 and 5                                                                           `   

int main() {

  // first step
  int a=12;
  int b=5;
  int addition,subtraction,multiplication,division;

  // second step

  //addition 
  addition = a+b;
  cout << "12+5=" << a+b << endl ;

  // subtraction
  subtraction = a-b;
  cout << "12-5=" << a-b << endl ;

  // multiplication
  multiplication = a*b;
  cout << "12*5=" << a*b << endl;

  // division
  division = a/b;
  cout << "12/5=" << a/b << endl;

  return 0;
} 