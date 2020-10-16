#include <iostream>
using namespace std ;

// Create a C++ program to display a multiplication table from user input. The user input is the length of the multiplication table

int main () {
int i,j,k;
cout << "inputt your number =" ;
cin >> k ;

for (i=1 ; i<=k ; i++){
  for (j=1 ; j<=k ; j++){
    cout << i*j << " " ;
  }
  cout << endl;
}
return 0;
}