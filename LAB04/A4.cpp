#include <iostream>
using namespace std;

//Create a BMI calculator.                           a. Input weight(kg) and height(m)                   b. Calculate the BMI BMI = weight / (height)2        c. Check the BMI                                        Underweight = <18.5                                  Normal = 18.5 - 24.9                                 Overweight = 25 - 29.9                               Obesity = >30

// first step
int main () {
float weight,height,bmi;

// second step
cout << "hello, i'm BMI calculator!" << endl;
cout << " Enter your weight " << endl;
cin >> weight;
cout << " Enter your height (m)" << endl;
cin >> height;

bmi = weight / (height * height);
cout << "your BMI is: " << bmi << endl;

// third step
  if (bmi >= 30) {
    cout << "oh my god you are Obesity, do not eat!" << endl;
  }
  else if (bmi >= 25 && bmi <= 29.9) {
    cout << "you are overweight, diet and do some sports!" << endl;
  }
  else if (bmi >= 18.5 && bmi <= 24.9) {
    cout << "your are normal!" << endl;
  }
  else if (bmi <= 18.5 ) {
    cout << "you are underweight, eat al lot of food and do some sports!" << endl;
  }
  else {
    cout << "enter proper data!" << endl;
  }

  return 0;
}