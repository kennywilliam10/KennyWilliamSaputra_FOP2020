#include <iostream>
using namespace std;

// question no.2 write a c++ program to print the area and curcumference of a circle. given diameter : 10

int main () {

 // first step 
 double radius, circumference, area ;
 double diameter = 10;
 double pii = 3.14;

 // second step
 radius = diameter/2;

 circumference= 2 * pii * radius;

 area = radius * radius * pii;

 cout << "circumference =" << circumference << endl;

 cout << "area =" << area << endl;

 return 0; 
} 