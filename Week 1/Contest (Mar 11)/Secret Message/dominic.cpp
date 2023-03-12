#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
  string s;
  int q;
  cin >> q;
  while (q--) {
    cin >> s;
    int k = ceil(sqrt(s.length()));
    int size = k*k;
    while (s.length() < size) s += '*';
    vector<vector<char>> grid(k, vector<char>(k));
    
    int l = 0;
    for (int i = 0; i < k; i++) {
      for (int j = 0; j < k; j++) {
        grid[i][j] = s[l];
        l++;
      }
    }

    for (int j = 0; j < k; j++) {
      for (int i = k-1; i >= 0; i--) {
        if (grid[i][j] == '*') continue;
        cout << grid[i][j];
      }
    }
    cout << endl;
  }
  return 0;
}
