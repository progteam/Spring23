#include <iostream>
using namespace std;

int main(void) {
    int N;
    
    while(cin >> N) {
        if (N > 2) {
            cout << N + (N - 2) << endl;
        } else {
            cout << N << endl;
        }
    }
    return 0;
}
