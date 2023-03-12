#include <iostream>
#include <vector>
#include <functional>
using namespace std;

typedef long long int LL;

int main() {
  int m, n;
  cin >> m >> n;
  vector<vector<int>> grid(m, vector<int>(n));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grid[i][j];
    }
  }

  function <LL (int, int)> solve = [&] (int x, int y) {
    LL count = 0;
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        count += (grid[i][j] * (abs(x-i) + abs(y-j)));
      }
    }
    return count;
  };

  LL res = 1e15;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      res = min(res, solve(i, j));
    }
  }

  cout << res << endl;
  return 0;
}
