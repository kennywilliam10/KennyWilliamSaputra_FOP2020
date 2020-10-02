#include <iostream>
using namespace std;

//Write a C++ program to check the stages of age from user input. 0 - 12 years : Child 12 - 18 years : Teenager > 18 years : Adult

// first step
int main() {
    int inputage ;

    // second step
    cout << "input your age :" ;
    cin >> inputage ;

    // third step
    if (inputage <0) {
        cout << "you are god \n" ;
    } else if (inputage <12) {
        cout << "you are a child \n" ;
    } else if (inputage <= 18) {
        cout << "you are teenager \n" ;
    } else {
        cout << "you are adult \n" ;
    }
        return 0;
    
}