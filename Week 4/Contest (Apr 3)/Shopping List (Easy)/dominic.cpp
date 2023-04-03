#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  string s;
  set<string> res;
  for (int j = 0; j < m; j++) {
    cin >> s;
    res.insert(s);
  }
  for (int i = 1; i < n; i++) {
    set<string> curr;
    for (int j = 0; j < m; j++) {
      cin >> s;
      curr.insert(s);
    }
    vector<string> rem;
    for (auto &it : res) {
      if (curr.count(it)) continue;
      rem.push_back(it);
    }
    for (auto &it : rem) {
      res.erase(it);
    }
  }

  cout << res.size() << endl;
  for (auto &it : res) cout << it << endl;
  return 0;
}
