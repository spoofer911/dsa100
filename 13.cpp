/* WAP to find a Multiplication of 2 Matrix (dimension and value should be
 * entered by user) */
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  int x, y, m, n;
  cout << "Enter the space separated dimension of the first array : ";
  cin >> x >> y;
  cout << "Enter the space separated dimension of the second array : ";
  cin >> m >> n;
  if (y != m) {
    cout << "Couldn't multiply " << endl;
    return 0;
  }
  int a[x][y], b[m][n];
  cout << "Enter the elements of first matrix : ";
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      cin >> a[i][j];
    }
  }
  cout << "Enter the elements of second matrix : ";
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> b[i][j];
    }
  }
  int c[x][n];
  int temp = 0;
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      for (int k = 0; k < y; k++) {
        temp += a[i][k] * b[k][i];
      }
      c[i][j] = temp;
    }
  }
  cout << "The result of multiplication is : " << endl;
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      cout << c[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
