#include <iostream>
using namespace std;

void print(string word, int times){
  for(int i=1; i<=times; i++){
    cout << word << endl;
  }
}

int main(){
  string inputWord;
  int inputTimes;

  cout << "Input the string = ";
  cin >> inputWord;
  cout << "Input the amount of time = ";
  cin >> inputTimes;

  print(inputWord, inputTimes);
  return 0;
}