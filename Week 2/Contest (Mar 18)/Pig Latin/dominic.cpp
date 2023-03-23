#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// template <class T> ostream& operator<<(ostream& os, const vector<T>& v) {
//     bool isFirst = 1;
//     for (auto &it : v) {
//         if (!isFirst) os << " ";
//         os << it;
//         isFirst = 0;
//     }
//     return os;
// };

// inline vector<string> split(const string& s) {
//     stringstream ss(s);
//     vector<string> res;
//     for (string w; ss >> w;) res.push_back(w);
//     return res;
// }

int main() {
    ios::sync_with_stdio(0); cin.tie(NULL);

    string s, vowels = "aeiouy";
  
    // get every line until end of input
    while (getline(cin, s)) {
      
        // split line into words and store in curr vector [used function at line 16 for initial solution] vector<string> curr = split(s);
        stringstream ss(s);
        vector<string> curr;
        for (string w; ss >> w;) curr.push_back(w);
      
        // Convert every word to pig latin
        for (int i = 0; i < curr.size(); i++) {
            auto j = curr[i].find_first_of(vowels);
            curr[i] = (!j ? (curr[i] + "yay") : curr[i].substr(j) + curr[i].substr(0, j) + "ay");
        }
      
        // print words on current line [used function at line 6 for initial solution] cout << curr << endl;
        for (auto &w : curr) cout << w << " ";
        cout << endl;
    }

    return 0;
}
