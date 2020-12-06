#include <iostream>
#include <fstream>
using namespace std;

int main(){
  int myarray[100];
  int min;
  int max;
  int sum = 0;

  ifstream file("LAB12/LAB12_randnum.txt");
  for(int i = 0;i<100;i++){
    file >> myarray[i];
  }

  max = myarray[0];
  for(int i=0;i<100;i++){
    if(myarray[i]>max){
      max = myarray[i];
    }
  }

  min = myarray[0];
  for(int i=0;i<100;i++){
    if(myarray[i]<min){
     min = myarray[i];
    }
  }


    cout<<"nilai max : "<<max<<endl;
    cout<<"nilai min : "<<min<<endl<<endl;

  for(int i = 0;i<100;i++){
    sum += myarray[i];
  }

 cout<<"rata - rata : "<< sum/100;
 

}

