class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> res = {celsius+273.15, celsius*1.8 + 32};
        return res;
    }
};
