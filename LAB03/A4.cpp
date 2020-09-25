#include <iostream>
using namespace std;

// question no.4 4. Create a simple calculator using C++. a. Ask user for 2 number.                                 b. Ask the arithmetic operation that user want (addition, subtraction,multiplication, division)                     c. Display the result                                   Note: Make sure to not divide by zero

int main (){
  // first step
  char op;
  double num1, num2;

  // second step 
  cout<<"\n Input Your Number's : ";
  cin>>num1>>num2;

  cout<<"\n Select the operation that you need +,-,*,/";
  cin>>op;

  // third step
    switch (op) {

      // If user enter +
      case '+' :
        cout<<num1+num2;
        break;

      // If user enter -
      case '-' :
        cout<<num1-num2;
        break; 

      // If user enter *
      case '*' :
        cout<<num1+num2;
        break; 
        
      // If user enter /
      case '/':
      if (num2==0){
        cout<<"\n no result";
      }
      else {
        cout<<num1/num2;
      }

        break;
      
      //If the operator other than +,-,*,/
      default:
        cout<<"\nError";
        break;
    }
    return 0;
} 
    
