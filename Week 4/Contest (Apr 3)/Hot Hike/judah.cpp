#include <iostream>
using namespace std;

int main(void) {
    int length;
    cin >> length;
    int days[length];

    for (int i = 0; i < length; i++) {
        cin >> days[i];
    }

    int departureDay, maxTemp = 41;
    for (int i = 0; i < length - 2; i++) {
        if (days[i] > days[i + 2] && days[i] < maxTemp) {
            maxTemp = days[i];
            departureDay = i + 1;
        } else if (days[i] <= days[i + 2] && days[i + 2] < maxTemp) {
            maxTemp = days[i + 2];
            departureDay = i + 1;
        }
    }

    cout << departureDay << " " << maxTemp;
    return 0;
}
