#include <iostream>
using namespace std;

// Create a C++ program to display the pattern 

int main () {
  for (int row=1 ; row <=5 ; row++) {
    for (int col=1 ; col <=row ; col++){
      cout << "*" ;
    }
    cout << endl ;
  }
 return 0;
}