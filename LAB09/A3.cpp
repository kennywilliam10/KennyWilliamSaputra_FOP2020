#include <iostream>
using namespace std;

void greeting (string name){
  cout << "\n" << "haii! " << name << " thats pleasure to meet you";
}
int main(){
  string n;
  cout << "haii! What is your name? ";
  cin >> n;
  greeting(n);
  
}