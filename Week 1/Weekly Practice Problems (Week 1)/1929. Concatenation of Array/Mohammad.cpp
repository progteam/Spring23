class Solution {
public:
	vector<int> getConcatenation(vector<int> &nums) {
		vector<int> v;
		for (int i : nums) {
			v.push_back(i);
		}
		for (int i : nums) {
			v.push_back(i);
		}
		return v;
	}
};
