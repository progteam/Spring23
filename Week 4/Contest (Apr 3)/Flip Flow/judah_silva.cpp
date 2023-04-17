#include <iostream>
using namespace std;

int main(void) {
    int t, s, n;
    cin >> t >> s >> n;

    int flips[n];

    for (int i = 0; i < n; i++) {
        cin >> flips[i];
    }

    int top = 0;
    bool flipped = true;
    for (int i = 1; i < n; i++) {
        if (flipped) {
            top += flips[i] - flips[i - 1];
            flipped = false;
            if (top > s) top = s;
        } else {
            top -= flips[i] - flips[i - 1];
            flipped = true;
            if (top < 0) top = 0;
        }
    }

    int seconds = 0;
    if (flipped) {
        top += t - flips[n - 1];
        if (top > s) top = s;
        while (top < s) {
            seconds++;
            top++;
        }
    } else {
        top -= t - flips[n - 1];
        if (top < 0) top = 0;
        while (top > 0) {
            seconds++;
            top--;
        }
    }
    
    

    cout << seconds;
    return 0;
}
