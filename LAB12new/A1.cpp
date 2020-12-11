#include <iostream>
using namespace std;

int main() {
  const int array_size = 7;
  int my_arr[array_size] = {1, 4, 7, 2, 6, 3, 5};
  // int temp[array_size];
  
  for (int i = 0; i < array_size - 1; i++){
    int temp = 0;
    for (int j = i + 1; j < array_size; j++){
      if (my_arr[i] > my_arr[j]){
      temp = my_arr[i];
      my_arr[i] = my_arr[j];
      my_arr[j] = temp; 
    }
    }
  }

  for (int i = 0; i < array_size; i++){
    cout << my_arr[i] << endl;
  }
}