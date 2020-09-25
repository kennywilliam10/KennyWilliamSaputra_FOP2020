#include <iostream>
using namespace std; 

// question no.3 Write a C++ program to check whether the user input is a vowel or consonant alphabet.

int main ()
{
  // first step
  char alphabet;

  // second step
  cout << " what is your Alphabet's type!\n" 
       << "What alphabet do you want? ";
  cin >> alphabet;

  // third step
  switch (alphabet)
  {
    case 'a': case 'i': case 'u': case 'e': case 'o':
    cout << "It is Vowel" << endl;
    break;

    case 'b': case 'c': case 'd': case 'f': case 'g': case 'h': case 'j': case 'k': case 'l': case 'm': case 'n': case 'p':  case 'q': case 'r': case 's': case 't': case 'v': case 'w': case 'x': case 'y': case 'z':
    cout << "It is Consonant" << endl;
    break;

    default: 
    cout << " it is not alphabet" << endl;
    break; 
  }
return 0;
}