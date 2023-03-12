#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef pair<int, int> pii;

int main() {
  vector<int> dir = {1, 0, -1, 0, 1};
  int m, n;
  string s;
  cin >> m >> n;
  cin.ignore();
  vector<vector<int>> grid(m, vector<int>(n));

  for (int i = 0; i < m; i++) {
    getline(cin, s);
    for (int j = 0; j < n; j++) {
      grid[i][j] = s[j] - '0';
    }
  }

  int res = 1;
  queue<pii> q;
  q.emplace(0, 0);

  while (!q.empty()) {
    queue<pii> newQ;

    while (!q.empty()) {
      pii curr = q.front();
      q.pop();
      int jump = grid[curr.first][curr.second];
      if (jump == -1) continue;

      for (int i = 0; i < 4; i++) {
        int r = curr.first + jump * dir[i];
        int c = curr.second + jump * dir[i + 1];

        if (r < 0 || c < 0 || r >= m || c >= n) continue;
        if (grid[r][c] == -1) continue;
        if (r == m-1 && c == n-1) {
          cout << res << endl;
          return 0;
        }

        newQ.emplace(r, c);
      }

      grid[curr.first][curr.second] = -1;
    }

    q = newQ;
    res++;
  }

  cout << -1 << endl;

  return 0;
}
