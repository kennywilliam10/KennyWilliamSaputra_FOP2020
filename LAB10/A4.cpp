#include <iostream>
using namespace std;

void yearmonthday (int number) ;

int main () {
  yearmonthday (366);
}

void yearmonthday (int number) {
  int year = number/365;
  int month = number%365;
  int day = month%30;
  cout << "year = " << year << endl;
  cout << "month = " << month << endl;
  cout << "day = " << day << endl;
}