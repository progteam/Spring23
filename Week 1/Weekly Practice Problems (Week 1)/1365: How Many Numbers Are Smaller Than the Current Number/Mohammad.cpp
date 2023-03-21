class Solution {
public:
	vector<int> smallerNumbersThanCurrent(vector<int> &nums) {
		vector<int> v;
		int sum = 0;
		for (int i = 0; i < nums.size(); i++) {
			for (int j = 0; j < nums.size(); j++) {
				if (nums[j] < nums[i] && j != i) {
					sum++;
				}
			}
			v.push_back(sum);
			sum = 0;
		}
		return v;
	}
};
