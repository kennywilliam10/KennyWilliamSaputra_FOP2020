#include <iostream>
using namespace std;

// Find the Max of 2 integer
int max (int num1, int num2){
  if (num1 > num2){
    return num1;
  }
  else{
    return num2;
  }
}

// Find the Min of 2 integer
int min (int x, int y){
  if (x < y){
    return x;
  }
  else{
    return y;
  }
}

// Find the Min of 2 double
double min (double a, double b){
  if (a < b){
    return a;
  }
  else{
    return b;
  }
}

// Find the Min of 3 double
double min (double p, double q, double r){
  if (p < q && q < r ){
    return p;
  }
  if (q < r && r < p){
    return q;
  }
  if (r < p && p < q){
    return p;
  }
  }

int main(){
  cout << max(5,6) << endl;
  cout << min(5,6) << endl;
  cout << min(5.6,6.5) << endl;
  cout << min(0.6,0.7,0.8) << endl;
  return 0;
}