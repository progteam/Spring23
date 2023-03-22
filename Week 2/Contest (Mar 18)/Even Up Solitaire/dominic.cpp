#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> d(n), e;
    for (int &it : d) cin >> it;

    while (!d.empty()) {
        if (!e.empty() && (e.back() + d.back())%2 == 0) {
            e.pop_back();
        } else {
            e.push_back(d.back());
        }
        d.pop_back();
    }

    cout << d.size() + e.size() << endl;
    return 0;
}
