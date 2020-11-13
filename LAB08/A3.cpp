#include <iostream>
#include<cmath>
using namespace std;

// 1. find how many characters in this string.                  a. hello world!                                           b. prasetiya mulya                                        c. SE2020 is the best                                  2. add this string into one string.                          a. "my name is " and "john trumpt"                        b. "have a " and "good day!"

int main () {
  //NUMBER 1: How many characters of the given string
  //.size() same as .length()
  string p = "Hello World!";
  cout << "\n" << p.length() << endl;
  string q = "Prasetiya Mulya";
  cout << q.size() << endl;
  string r = "SE2020 is the best!";
  cout << r.length() << endl;

  //NUMBER 2: add string to other string
  string B1 = "My name is ", B2 = "John Trump";
  cout << "\n" << (B1.size() + B2.size()) << endl;
  string B3 = "Have a ", B4 = "good day!";
  cout << (B3.size() + B4.size()) << endl;

}