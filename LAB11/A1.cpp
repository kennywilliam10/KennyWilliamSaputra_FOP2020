#include <iostream> 
using namespace std; 

//From the array above, create a function to display:       a. First element                                            b. Last element                                            c. 4th element

void elemen(int arr[], int k); //function prototype

int main() 
{ 
    int mylist[5] =  { 4, 7, 12, 5, 2 }; 
    int k = sizeof(mylist) / sizeof(mylist[0]); 
    elemen(mylist, k); 

    return 0; 
} 

void elemen(int arr[], int k) 
{ 
    int a = arr[0];
    int b = arr[k - 1]; 
    int c = arr[3];
    cout << "elemen pertama  : " << a << endl;
    cout << "elemen terakhir : " << b << endl;
    cout <<"elemen ke empat : " << c << endl; 
} 
  