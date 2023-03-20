class Solution {
public:
	int mostWordsFound(vector<string> &sentences) {
		int numWords = 0;
		for (auto i : sentences) {
			int ctn = 1 + count(i.begin(), i.end(), ' ');
			numWords = max(numWords, ctn);
		}

		return numWords;
	}
};
