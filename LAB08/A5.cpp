#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream input;

  // Open a file
  input.open("myname.txt");

  string myname;

  // Read data
  input >> myname;

  // Input >> myname
  cout << "My name is " << myname << endl;
  
  // Close file
  input.close();

  cout << "Done" << endl;
  return 0;
}