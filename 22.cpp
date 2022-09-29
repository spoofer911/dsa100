/* Print a following patterns */
#include <iostream>
using namespace std;
void p1(int n) {
  int x = 1;
  char y = 'A';
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= (n - 1) * 2; j++) {
      if (j >= (n - 1 - i) && j <= (n - 1 + i)) {
        if (i % 2 == 0) {
          if (j % 2 != 0) {
            cout << x;
            x++;
          } else {
            cout << " ";
          }
        } else {
          if (j % 2 == 0) {
            cout << y;
            y++;
          } else {
            cout << " ";
          }
        }
      } else
        cout << " ";
    }
    cout << endl;
  }
  return;
}
void p2(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < (2 * n); j++) {
      if (j >= i && j < (2 * n) - i - 1)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
}
void p3(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < (2 * n); j++) {
      if (j <= (n - i - 1) || j >= (n - 1 + i))
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
}
int main(int argc, char *argv[]) {
  int n;
  cout << "Enter the number of rows : ";
  cin >> n;
  cout << "First pattern is : " << endl;
  p1(n);
  cout << "Second pattern is : " << endl;
  p2(n + 1);
  cout << "Third pattern is : " << endl;
  p3(n + 1);
  return 0;
}
