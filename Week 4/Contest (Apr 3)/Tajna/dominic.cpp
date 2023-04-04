#include <iostream>
#include <vector>
using namespace std;

int main() {
  string s;
  cin >> s;
  int len = s.length();
  int m, n;
  for (int i = 1; i < len; i++) {
    if (len%i == 0 && len/i >= i) {
      m = len/i;
      n = i;
    }
  }

  int l = 0;
  vector<vector<char>> grid(m, vector<char>(n, '#'));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (l == s.length()) continue;
      grid[i][j] = s[l++];
    }
  }

  for (int j = 0; j < n; j++) {
    for (int i = 0; i < m; i++) {
      if (grid[i][j] == '#') continue;
      cout << grid[i][j];
    }
  }
  cout << endl;
  return 0;
}
