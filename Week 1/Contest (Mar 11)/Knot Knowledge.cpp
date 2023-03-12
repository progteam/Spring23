#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  int n, num;
  cin >> n;
  unordered_map<int, int> m;

  for (int i = 0; i < n; i++) {
    cin >> num;
    m[num]++;
  }

  for (int i = 0; i < n-1; i++) {
    cin >> num;
    m[num]++;
  }

  for (auto &it : m) {
    if (it.second == 1) {
      cout << it.first << endl;
      break;
    }
  }

  return 0;
}
