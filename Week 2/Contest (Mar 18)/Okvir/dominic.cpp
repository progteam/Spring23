#include <iostream>
#include <vector>
using namespace std;

int main() {
  int m, n;
  cin >> m >> n;
  vector<int> d(4);
  for (auto &it : d) cin >> it;
  vector<string> words(m);
  for (auto &it : words) cin >> it;

  int sizeM = m + d[0] + d[3];
  int sizeN = n + d[1] + d[2];

  string symbols = "#.";
  vector<vector<char>> grid(sizeM, vector<char>(sizeN));
  for (int i = 0; i < sizeM; i++) {
    int l = i%2;
    for (int j = 0; j < sizeN; j++, l++) {
      grid[i][j] = symbols[l%2];
    }
  }

  for (int i = d[0], l = 0; l < m; i++, l++) {
    string word = words[l];
    for (int j = d[1], c = 0; c < n; j++, c++) {
      grid[i][j] = word[c];
    }
  }

  for (int i = 0; i < sizeM; i++) {
    for (int j = 0; j < sizeN; j++) {
      cout << grid[i][j];
    }
    cout << endl;
  }

  return 0;
}
