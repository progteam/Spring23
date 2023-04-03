#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> d(n);
  for (auto &it : d) cin >> it;

  int l = 0, res = 1e9, resIndex = -1;
  while (l+2 < n) {
    int curr = max(d[l], d[l+2]);
    if (res > curr) {
      res = curr;
      resIndex = l+1;
    }
    l++;
  }

  cout << resIndex << " " << res << endl;
  return 0;
}
