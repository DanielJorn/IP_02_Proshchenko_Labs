#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "enter n: ";
  cin >> n;

  float x1 = 1;
  float x2 = 0.3;
  float x_prev = x1;
  float x_cur = x2;
  float xi = 0;

  // print first 2 elements
  cout << x1 << "\n";
  cout << x2 << "\n";

  for (int i = 3; i <= n; i++){
    xi = (i + 1) * x_prev;
    x_prev = x_cur;
    x_cur = xi;
    cout << xi << "\n";
  }
}