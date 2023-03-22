#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int f, r;
  while (cin >> f) {
    if (!f) break;
    cin >> r;

    vector<double> front(f), rear(r);
    for (auto &it : front) cin >> it;
    for (auto &it : rear) cin >> it;

    vector<double> ratios;
    for (double m : front) {
      for (double n : rear) {
        ratios.push_back(n / m);
      }
    }

    sort(ratios.begin(), ratios.end());

    double res = 0;
    for (int i = 1; i < ratios.size(); i++) {
      res = max(res, ratios[i] / ratios[i - 1]);
    }

    printf("%.2f\n", res);
  }
  return 0;
}
