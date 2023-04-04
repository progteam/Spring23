#include <iostream>
#include <vector>
using namespace std;

int SIZE = 9;
int MISS = -99;

void winner(int x) {
  if (x == 3) cout << "In progress" << endl;
  else if (x == 2) cout << "Cat's" << endl;
  else if (x == 1) cout << "X wins" << endl;
  else cout << "O wins" << endl;
}

void solve() {
  string s;
  cin >> s;
  int n = SIZE*2;
  vector<int> d(n);
  int r = 0;
  while (!s.empty()) {
    int x = s.back()-'0';
    for (int i = 0; i < 3 && r < n; i++, r++) {
      d[r] = (x & 1);
      x = x>>1;
    }
    s.pop_back();
  }

  vector<int> board(SIZE, MISS);
  for (int i = 0; i < SIZE; i++) {
    if (d[i]) {
      board[i] = d[i+SIZE] ? 1 : 0;
    }
  }

  vector<int> straight(6, 0);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      straight[i] += board[i + j*3];
      straight[i+3] += board[i*3 + j];
    }
  }

  for (int &x : straight) {
    if (x == 3) {
      winner(1);
      return;
    } else if (!x) {
      winner(0);
      return;
    }
  }

  if (board[0] + board[4] + board[8] == 3 || board[2] + board[4] + board[6] == 3) {
    winner(1);
    return;
  }

  if (board[0] + board[4] + board[8] == 0 || board[2] + board[4] + board[6] == 0) {
    winner(0);
    return;
  }

  for (int i = 0; i < SIZE; i++) {
    if (board[i] == MISS) {
      winner(3);
      return;
    }
  }
  winner(2);
}

int main() {
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
