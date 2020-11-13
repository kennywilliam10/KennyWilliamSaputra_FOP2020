#include <iostream>
#include <cmath>
using namespace std;

// 1. create a function to                                  a. sum                                                    b. Substract                                               c. Multiply                                               d. Division

//Inputs declaration
//Sum
int sumnum (int num1, int num2){
  int result1;
  result1 = num1 + num2;
  return result1;
}

//Substract
int subnum (int num1, int num2){
  int result2;
  result2 = num1 - num2;
  return result2;
}

//Multiply
int mulnum (int num1, int num2){
  int result3;
  result3 = num1 * num2;
  return result3;
}

//Division
int divnum (int num1, int num2){
  int result4;
  result4 = num1 / num2;
  return result4;
}

//Outputs
int main() {
  cout << subnum (5 , 6) << endl;
  cout << subnum(5 , 6) << endl;
  cout << mulnum(5 , 6) << endl;
  cout << divnum(5 , 6) << endl;

  return 0;
  }