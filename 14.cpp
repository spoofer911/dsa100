/* WAP to calculate an angle between hour and minute hand. (Hours and minutes
 * should be taken from user). */
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[]) {
  int hr, min, a, b, diff;
  cout << "Enter the hours : ";
  cin >> hr;
  cout << "Enter the minutes : ";
  cin >> min;
  a = 30 * (hr % 12);
  b = 6 * (min % 60);
  diff = abs(a - b);
  if (diff > 180)
    diff = 360 - 180;
  cout << "Angle difference is : " << diff << endl;
  return 0;
}
