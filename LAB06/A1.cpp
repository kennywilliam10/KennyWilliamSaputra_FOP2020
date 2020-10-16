#include <iostream>
using namespace std;

// Create a C++ program to display numbers from 1 to 100, multiple of 3, but don’t display the multiple of 5.

int main () {
int i=102 ;
while(i > 0) {
  i -= 3 ;
  if (i % 5 == 0){
    continue ;
  }
  cout << i << endl ;
}

}