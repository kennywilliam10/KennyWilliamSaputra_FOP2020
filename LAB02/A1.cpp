#include <iostream>
using namespace std;

// question no.1 write a c++ program to calculate the area and perimeter of by user input.

int main (){
  // first step 
  double length,width,area,perimeter;
  
  // second step
  cout<<"Input rectangle Length : ";
  cin>>length;

  cout<<"Input rectangle Width : ";
  cin>>width;
    
  area = length * width;
  perimeter = 2*(length+width); 

  cout<<" area of rectangle is " << area << endl;
  
  cout<<"perimeter of rectangle is "<< perimeter << endl;
  
  return 0;
}