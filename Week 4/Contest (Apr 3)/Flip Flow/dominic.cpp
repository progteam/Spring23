#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t, s, n;
  cin >> t >> s >> n;
  vector<int> d(n);
  for (auto &it : d) cin >> it;
  int curr = 0, l = 0;
  for (int i = 0; i <= t; i++) {
    curr = max(curr-1, 0);
    if (l < d.size() && d[l] == i) {
      curr = s-curr;
      l++;
    }
  }

  cout << curr << endl;
  return 0;
}
