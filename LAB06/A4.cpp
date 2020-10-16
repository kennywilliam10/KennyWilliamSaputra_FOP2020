#include <iostream>
using namespace std;

// Create a C++ program to display the pattern

int main () {
  int row;
  int i,j ;

  cout << "input amount of row that you want =" << endl;
  cin >> row ;

  for (i=1 ; i<=5 ; i++){
    for (j=0 ; j<=i ; j++){
      cout << "*" ;
    }
    cout << endl ;
  } 
  for (i=row-1 ; i>=0 ; i-- ) {
    for (j=0 ; j<=i ; j++){
      cout << "*" ;
    }
    cout << endl ;
  }
  return 0;
}