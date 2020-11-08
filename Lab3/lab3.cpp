#include <iostream>
#include <cmath>
using namespace std;

int main(){
  float x;

  cout << "enter x: ";
  cin >> x;

  float epsilon = 0.0001;
  float an = 0;
  float sum = 0;
  int n = 0;
  
  do {
    n = n + 1 ;
    an = x / (sqrt(n) * (n + 2));
    sum = sum + an ;
    cout << "n: " << n << "\nan: " << an << "\n";
  }
  while(an >= epsilon || n < 10 );
  cout << sum << "\n";
}