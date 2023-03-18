class Solution {
public:
    int pivotInteger(int n) {
        int l = 1, r = n;
        int sumL = l, sumR = r;
        while (l < r) {
            if (sumL > sumR) {
                r--;
                sumR += r;
            } else {
                l++;
                sumL += l;
            }
        }
        
        return sumL == sumR ? l : -1;
    }
};
