#include <iostream>
using namespace std;

//From the array above, create a function to check the element whether it is odd or even.

int main() {
  
  int mylist[5] = {4,7,12,5,2};
    
    if (mylist[0]%2==1) {
      cout << "Element of number 1 is odd " << endl;
    }
    else {
      cout << "Element of number 1 is even " << endl;
    }

    if (mylist[1]%2==1) {
      cout << "Element of number 2 is odd " << endl;
    }
    else {
      cout << "Element of number 2 is even " << endl;
    }
    
    if (mylist[2]%2==1) {
      cout << "Element of number 3 is odd " << endl;
    }
    else {
      cout << "Element of number 3 is even " << endl;
    }

    if (mylist[3]%2==1) {
      cout << "Element of number 4 is odd " << endl;
    }
    else {
      cout << "Element of number 4 is even " << endl;
    }

    if (mylist[4]%2==1) {
      cout << "Element of number 5 is odd " << endl;
    }
    else {
      cout << "Element of number 5 is even " << endl;
    }

    return 0;
    }