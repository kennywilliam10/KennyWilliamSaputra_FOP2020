#include <iostream>
#include <math.h>
using namespace std;

// question no.3 write a c++ program to calculate the volume and surface area of sphere by input the radius

int main (){

  // first step
  double radius,volume,surface;
  float pii= 3.14 ;
  
  // second step
  cout<<"Input the radius of sphere : ";
  cin>>radius;

  volume = 4/3*pii* pow(radius,3);
  surface = 4*pii*pow(radius,2);

  cout<<" volume = " << volume << endl ;
  
  cout<<" surface = " << surface << endl;
  
  return 0;
}
