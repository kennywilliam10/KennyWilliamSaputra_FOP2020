#include <iostream>
using namespace std;

// question no.2 Write a C++ program to ask the time by user input and display greetings based on user’s time.

int main(){
  
  // first step
  double time;

  // second step
  cout<<" What time is it? : \n ";
  cin>>time;

  // third step
  {
  if ((time>=00.00)&&(time<=11.59))
  cout<<" Good Morning \n ";

  if ((time>=12.00)&&(time<=17.59))
  cout<<" Good Afternoon \n ";

  if ((time>=18.00)&&(time<=23.59))
  cout<<" Good Evening \n ";
  }
  if (time > 24.00)
  {cout << "error" << endl;}

  return 0;
}