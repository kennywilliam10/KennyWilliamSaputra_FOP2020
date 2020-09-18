#include <iostream>
#include <math.h>
using namespace std;

  // question no.4 write a c++ program to convert temperature in Celciusto Farenheit by user input 

int main (){
 
  // first step
  float Celcius,Farenheit;
 
  // second step
  cout<<"Input temperature in Celcius : ";
  cin>>Celcius;

  Farenheit = (Celcius * 9/5) + 32;

  cout<<" Farenheit = " << Farenheit << endl;
  
  return 0;
}
