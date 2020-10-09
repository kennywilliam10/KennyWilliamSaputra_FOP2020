#include <iostream>
using namespace std;

// Create an ATM simulation program using C++.            - Your first balance $500                                 - You can deposit (adding to balance)                     - You can withdraw your money (reducing the balance)      - Ask the user to do other transaction or not

int main() {
  // first step
  float balance = 500;
  float change;
  int decision;
  char again;

  // second step
 cout << "Welcome to the Bank\n";

  
  do{
    cout << "\ncase '1' check your money \ncase '2'  want to deposit the money\ncase '3' want to withdraw the money"<< endl;
    cin >> decision;

    switch (decision){
    case 1 :
      cout << "Your money is $" << balance << endl;
      break;

    case 2 :
      cout << "Your remaining money is $" << balance << "\n amount of money that you want to deposit = ";
      cin >> change;

      balance += change;
      cout  << "Your money is $" << balance;
      break;
      
    case 3 :
      cout << "Your money is $" << balance << "\n amount of money that you want to withdraw = ";
      cin >> change;

      balance -= change;
      if (balance < 0){
        cout << "you do not have enough money " << endl;
        balance += change;
        break;
      }
      else {
        cout << " Success\n" << "Your remaining balance is $" << balance;
      break;
    }
    }

    cout << "\nDo you want to continue? if yes type 'y', if no type 'n' \n";
    cin >> again;
  } while (again == 'y');
  
  return 0;
}