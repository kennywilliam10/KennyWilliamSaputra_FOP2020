#include <iostream>
using namespace std;

// from Celcius to Fahrenheit
double F1(double C1){
  return (C1 * 9/5) + 32;
}

// from Fahrenheit to Celcius
double C2(double F2){
  return (F2 - 32) * 5/9;
}

int main(){
  cout << F1(100) << " C " << endl;
  cout << C2(212) << " F " ;
  return 0;
}