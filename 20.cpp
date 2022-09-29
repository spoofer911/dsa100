/* WAP to find a power a^b (without using power and multiplication operation) */
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  int a, b, sum = 1;
  cout << "Enter the base and power : ";
  cin >> a >> b;
  for (int i = 0; i < b; i++) {
    if (i == 0) {
      sum = a;
      continue;
    }
    int temp = sum;
    for (int j = 0; j < a - 1; j++) {
      sum += temp;
    }
  }
  cout << sum << endl;
  return 0;
}
