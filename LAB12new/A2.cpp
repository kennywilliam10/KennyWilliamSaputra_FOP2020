#include <iostream>
using namespace std;

//From the array above, search the number 5 using:  a. Linear Search                                   b. Binary Search

void linearsearch(int list[], int key, int array_size, int index){
  for (int i = 0; i < array_size; i++){
    if (key == list[i]){  
      index = i;
    }
  }
  cout << " linear = " << index << endl;
}

void binarysearch(int list[], int key, int array_size, int index, int high, int low ){
  while(high >= low){
    int mid = (high + low)/2;
    if (key < list[mid]){
      high = mid - 1;
    }
    else if (key == list[mid]){
      index = mid;
    }
    else {
      low = mid + 1;
      }
  
  }
  cout << " binary = " << index << endl;
} 
int main(){
 int key;
  cout << " what number that you want to be a key = ";
  cin >> key;
  int high, low;
  int index = 0;

  const int array_size = 7;
  int list[] = {1, 4, 7, 2, 6, 3, 5};

  linearsearch(list, key, array_size, index);
  binarysearch(list, key, array_size, index, high, low);
  
}