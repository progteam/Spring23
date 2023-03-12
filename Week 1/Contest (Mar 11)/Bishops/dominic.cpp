#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    cout << (n == 1 ? n : n*2-2) << endl;
  }
}
