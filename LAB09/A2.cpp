#include <iostream>
using namespace std;

void swap(int *x, int *y){
  // variable declaration
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}


string check(int a){
 
  if (a % 2 == 0){
    return "even";
  }
  else{
    return "odd";
  }
}

int main(){
  // variable declaration
  int x = 2;
  int y = 3;
  int a;

  //  before swap
  cout << "the previous value of x and y are " << endl;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl << endl;

  //  after swap
  swap(&x, &y);

  cout << "the new x and y are " << endl;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl << endl;

  
  cout << "Input number = ";
  cin >> a;

  cout << "\n" << "your number is " << check(a);  

  return 0;
}