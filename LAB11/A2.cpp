#include <iostream>
using namespace std;

//From the array above, create a function to calculate:     a. Sum                                                      b. Average

int main() {
  
  int mylist[5] = {4,7,12,5,2}; 
  
  int sum = 0; //initialize sum = 0

  for(int i=0; i<5 ; i++){
    sum = sum + mylist[i];
      }

   int average = sum/5; 
  
  cout<<" sum is "<< sum << endl;
  cout<< " average is " << average << endl; 
  
  return 0;
}