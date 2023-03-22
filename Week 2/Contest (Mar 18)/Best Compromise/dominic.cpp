#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    char c;
    cin >> n >> m;
    vector<int> d(m);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> c;
        d[j] += (c-'0');
      }
    }
    int lowHalf = n/2;
    for (int num : d) {
      cout << (num > lowHalf ? '1' : '0');
    }
    cout << endl;
  }
  return 0;
}
