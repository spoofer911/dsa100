#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  int n, temp = 0;
  cout << "Enter the number : ";
  cin >> n;
  string str = "";
  for (int i = n; i > 0; i /= 10) {
    string s = "";
    temp = i % 10;
    if (temp / 8 > 0) {
      s += "1";
      temp -= 8;
    } else
      s += "0";
    if (temp / 4 > 0) {
      s += "1";
      temp -= 4;
    } else
      s += "0";
    if (temp / 2 > 0) {
      s += "1";
      temp -= 2;
    } else
      s += "0";
    if (temp / 1 > 0) {
      s += "1";
      temp -= 1;
    } else
      s += "0";
    str = s + " " + str;
  }
  cout << "Its BCD equivalent is : " << str;
  return 0;
}
