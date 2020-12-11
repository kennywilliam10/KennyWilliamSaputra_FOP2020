#include <iostream>
#include <fstream>
using namespace std;


void sort(int list[], int array_size){
  int temp = list[1]; 
  for (int i = 0; i < array_size; i++){ 
    for (int j = i+1; j < array_size + 1; j++){
      if (list[i] > list[j]){
        temp = list[i];
        list[i] = list[j];
        list[j] = temp;
      }
    }
  }
  for (int i = 0; i < array_size; i++)
  cout << list[i] << '\n';
}

void BinarySearch(int list[], int key, int array_size, int index, int low, int high){
  while(high >= low){
    int mid = (high + low)/2;
    if (key < list[mid]){
      high = mid - 1;
    }
    else if (key == list[mid]){
      index = mid;
      break;
    }
    else if (key > list[mid]){
      low = mid + 1;
    }
  }
  cout << key << '\n' << list[index];

  if (key == list[index]){
    cout << '\n' << "Damn! You Win the Lottery!";
  }
  else{
    cout << '\n' << "wkwkwkwk You Lose the Lottery!";
  }
} 

int main(){
  ifstream input;
  input.open("LAB12(2)/LAB12_lottery_winner.txt");

  const int array_size = 7;
  int list[array_size];

  for(int i = 0; i < array_size; i++){
    input >> list[i];
    //  cout << my_arr[i] << '\n';
  }

  sort(list, array_size);

  int key;
  cout << '\n' << " enter the number that you have = ";
  cin >> key;
  int high = array_size - 1;
  int low = 0;
  int index = 0;

  BinarySearch(list, key, array_size, index, high,low);
}