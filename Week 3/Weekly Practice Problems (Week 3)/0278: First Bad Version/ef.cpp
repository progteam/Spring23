// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lo = 0, hi = n;
        while(lo + 1 != hi){
            int m = lo + ((hi - lo) >> 1);
            if (isBadVersion(m)) {
                hi = m;
            } else {
                lo = m;
            }
        }
        return hi;
    }
};
