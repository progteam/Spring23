class Solution {
public:
	string toLowerCase(string s) {
		for (char &str : s) {
			if (str >= 'A' && str <= 'Z') {
				str += 32;
			}
		}
		return s;
	}
};
