#include <iostream>
using namespace std;

    int sumDigits(int num1)	{
        int sum = 0;
        while (num1 != 0) {
            sum += num1 % 10;
            num1 /= 10;
        }
        return sum;
    }
 
int main()
{
	int num1,sum;
	sum=0;
    
	cout << " Input any number: ";
	cin>> num1;
	cout << num1 <<" => " << sumDigits(num1) <<endl;
  return 0  ;
	}