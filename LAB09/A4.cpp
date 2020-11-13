#include <iostream>
using namespace std;

double areaofcircle (float radius){
  double area;
  area=3.14*radius*radius;

  return area ;
}

int main () {
  double radius;

  cout << "what number that you want to become radius :";
  cin >> radius;

  cout << "area =" << areaofcircle(radius) << endl ;
return 0;
}

