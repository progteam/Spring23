#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double kx, ky, ox, oy, res = -1;
  for (int i = 0; i < 2; i++) {
    cin >> kx >> ky >> ox >> oy;
    res = max(res, sqrt(pow(abs(ox-kx), 2) + pow(abs(oy-ky), 2)));
  }

  printf("%.8f\n", res);
  return 0;
}
