#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    int x = 0, y = 0;
    for (int l = 0; l < n; l++) {
        if (1 & s[n-l-1] - '0') x += (1 << l);
        if (2 & s[n-l-1] - '0') y += (1 << l);
    }

    cout << n << " " << x << " " << y << endl;
    return 0;
}
