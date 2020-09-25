#include <iostream>
#include <cstdlib>
using namespace std;

// question no.5 Create a simple guessing number game using C++.                                                      a. Generate a random number from 1 - 100                   b. Ask user to guess the number                           c. Display the result whether the guess number is too low, too high or correct.

int main (){

  // first step
  srand(time(NULL));
  float num = rand() % 100,answer;
  
  // second step
  cout << "Hello, Welcome to guessing games \n" 
       << "How to Play: guess my number, the range is from 1 - 100!\n" 
       << "Are you ready broo ?\n"
       << "guess my number?" << endl;
  cin >> answer; 

  if (answer > 0 && answer <= 100){
    if (num == answer){
      cout << "you are very lucky " << endl;
    } else if (num < answer) {
      cout << "ohh thats too high, my number is = " << num << endl;
    } else {
      cout << "ohh thats too low , my number is = " << num << endl;
    }
  } else {
    cout << "you are stupid wkwk" << endl;
  }
  return 0;
}