#include <bits/stdc++.h>
using namespace std;

inline auto split(const string& s) {
  stringstream ss(s);
  vector<string> res;
  for (string w; ss >> w;) res.push_back(w);
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(NULL);
  
  int n;
  string s;
  cin >> n;
  cin.ignore();

  unordered_set<string> dict;
  for (int i = 1; i <= n; i++) {
    getline(cin, s);
    auto line = split(s);
    bool arrow = false;
    for (auto &curr : line) {
      if (curr == "->") {
        arrow = true;
        continue;
      }

      if (arrow) {
        dict.insert(curr);
      } else if (!dict.count(curr)) {
        cout << i << endl;
        return 0;
      }
    }
  }

  cout << "correct" << endl;
  return 0;
}
