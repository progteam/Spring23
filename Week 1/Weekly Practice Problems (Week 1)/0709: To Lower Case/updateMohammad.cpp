class Solution {
public:
	string toLowerCase(string s) {
		char name;
		string n;
		for (int i = 0; i < s.length(); i++) {
			name = tolower(s[i]);
			n += name;
		}
		return n;
	}
};
