#include <iostream>
#include <stack>
using namespace std;

int main() {
  string s;
  int n;
  cin >> n >> s;
  s += 'R';
  
  stack<int> order;
  for (int i = 1; i <= n; i++) {
    order.push(i);
    if (s[i-1] == 'L') continue;
    
    while (!order.empty()) {
      cout << order.top() << endl;
      order.pop();
    }
  }

  return 0;
}
