#include <cstdlib>
#include <iostream>
using namespace std;

// Create a math quiz using C++. There are 10 math questions generated from random number. User pass the test if 7 or more questions answered correctly.

int main() 
{
// first step
int Count = 0; 
int score = 0; 
int Num1    = rand() % 10; 
int Num2    = rand() % 10; 
int Correct = Num1 + Num2 ;
int Answer;

// second  step
cout << "welcome to the math quiz" << endl;
cout << " you need to answer 10 numbers !" << endl;
cout << " Good luck " << endl;

// third step
cout << "start" << endl;

    while (Count <= 9) {
    srand(time(NULL));
    Num1    = rand() % 10;
    Num2    = rand() % 10;
    Correct = Num1 + Num2 ;
    cout << Num1 << "+" << Num2 << endl;
    cin >> Answer;
    Count++;

    if (Answer == Correct){
        score++ ;
        cout << " true " << endl ;
    }
    else if (Answer != Correct){
        cout << " false " << endl;
    }
    }

    if (score <= 7){
      cout << " you did not pass the quizz, you must learn again " << endl;
    }
    

cout << "your score is " << score << " out of 10" << endl;

return 0; 
}