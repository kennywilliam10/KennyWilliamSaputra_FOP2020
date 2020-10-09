#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
  // first step
  int chance = 0;
  char again = 'y';
  
  // second step
  cout << "Are you ready? , lets play this game\n" ;

  while (again == 'y'){
    srand(time(NULL));
    float num = rand() % 100, answer;
    cout << "So, guess the number?" << endl;
    cin >> answer; 

    if (answer > 0 && answer <= 100){
      if (num == answer){
        cout << "You're lucky!" << endl;
        break;
      } else if (num < answer) {
        cout << "thats too high, my number is = " << num << endl;
      } else {
        cout << "thats too low, my number is = " << num << endl;
      }
    } 
    else {
      cout << " you are stupidd wkwkkw" << endl;
    }
    // third step
    cout << "Did you want still play? (y/n)" << endl;
    cin >> again;
    
    chance++;
  } 
  
  // last step
  cout << "You already tried  " << chance << " times" << endl;
  return 0;
}