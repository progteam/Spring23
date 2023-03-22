#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int res = (b%a > a/2.0 ? b/a + 1 : b/a);
    cout << (res%2 ? "down" : "up") << endl;
    return 0;
}
