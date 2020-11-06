#include <iostream>
#include<cmath>
using namespace std;

// 1. find the value of                                         a. sin37                                                  b. cos53                                                  c. tan 56                                              2. find the value of                                         a. asin 0.58                                              b. acos 0.29                                              c. atan 0.72                                           3. for x = (x| 0 < X < 5), find the value of y.              y = 2x^2-x+7                                           4. round up and down.                                        a. 5.89                                                   b. 7.2                                                    c. 12.05                                                  d. 0.03

int main() {
  // first number 
  // sin37
  double x = 37;
  double pi;
  pi = M_PI;
  double answer1;
  answer1 = sin ( x *(pi / 180));
  cout << answer1 << endl;

  // cos53
  double y = 53;
  double answer2;
  answer2 = cos (y * (pi / 180));
  cout << answer2 << endl;

  // tan60
  double z = 60;
  double answer3;
  answer3 = tan (z * (pi /180));
  cout << answer3 << endl;

  // second number 
  // asin 0.59
  double m = 0.58;
  double rad1, degree1;
  rad1 = asin (m);
  degree1 = rad1 * (180 / pi);
  cout << degree1 << endl;

  // acos 0.29
  double n = 0.29;
  double rad2, degree2;
  rad2 = acos (n);
  degree2 = rad2 * (180 / pi);
  cout << degree2 << endl;

  // atan 0.72
  double o = 0.72;
  double rad3, degree3;
  rad3 = atan (o);
  degree3 = rad3 * (180 / pi);
  cout << degree3 << endl;

  //root of (156-12)
  double answer4;
  double a;
  a = 156 - 12;
  answer4 = sqrt(a);
  cout << answer4 << endl;

  //NUMBER 3
  //find value of Y from the given X values
  double X, Y;
  for (X=1; X<5; X++){
    Y = 2*(pow(X,2)) - X + 7;
    cout << " answer = " << Y << endl;
  }
  

  //NUMBER 4
  //round up and down
  // 5.89
  double ans1 = ceil(5.89); //round up
  double ans5 = floor(5.89); //round down
  cout << "the round of 5.89 is " << ans1 << " & " << ans5 << endl;
  
  // 7.2
  double ans2 = ceil(7.2); //round up
  double ans6 = floor(7.2); //round down
  cout << "the round of 7.2 is " << ans2 << " & " << ans6 << endl;
  
  // 12.05
  double ans3 = ceil(12.05); //round up
  double ans7 = floor(12.05); //round down
  cout << "the round of 12.05 is " << ans3 << " & " << ans7<< endl;
  
  // 0.03
  double ans4 = ceil(0.03); //round up
  double ans8 = floor(0.03); //round down
  cout << "the round of 0.03 is " << ans4 << " & " << ans8 << endl;

    
  return 0;
  }

  