#include <iostream>
using namespace std;

//Write a C++ program to grade your quiz score.            a. Input 3 score                                          b. Find the average                                       c. Check the grade from the average                         A = >80 | C = 60 - 65                                      AB = 75 - 80 | D = 40 - 60                                  B = 70 - 75 | E = <40                                      BC = 65 - 70 |

// first step
int main() {
float score1,score2,score3,average;

// second step
cout << "first exam score :" << endl;
cin >> score1;
cout << " second exam score :" << endl;
cin >> score2;
cout << " third  exam score :" << endl;
cin >> score3;
average = (score1 + score2 + score3)/3;
cout << "average score : "<< average << endl;

// third step
  if (average >= 80) {
    cout << "your grade is A" << endl;
  }
  else if (average >= 75 && average < 80) {
    cout << "your grade is AB" << endl;
  }
  else if (average >= 70 && average < 75) {
    cout << "your grade is B" << endl;
  }
  else if (average >= 65 && average < 70) {
    cout << "your grade is BC" << endl;
  }
  else if (average >= 60 && average < 65) {
    cout << "your grade is C" << endl;
  }
  else if (average >= 40 && average < 60) {
    cout << "your grade is D" << endl;
  }
  else {
    cout << "your grade is E" << endl;
  }

return 0;
}