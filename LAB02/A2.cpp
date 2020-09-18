#include <iostream>
using namespace std;

// question no.2 write a c++ program to show your age this year, last year, and next year

int main (){

  // first step
  int agethisyear,agelastyear,agenextyear;

  // second step
  cout<<"Input your age this year : ";
  cin>>agethisyear;

  agelastyear = agethisyear - 1;
  agenextyear = agethisyear + 1;

  cout<<"age last year : " << agelastyear << endl;
  
  cout<<"age next year : " << agenextyear << endl;
  
  return 0;
}