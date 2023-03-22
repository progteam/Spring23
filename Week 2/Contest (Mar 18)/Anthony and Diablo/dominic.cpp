#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b;
  cin >> a >> b;
  double p = 2.0 * sqrt(M_PI * a);
  
  cout << (p > b ? "Need more materials!" : "Diablo is happy!");
  return 0;
}
