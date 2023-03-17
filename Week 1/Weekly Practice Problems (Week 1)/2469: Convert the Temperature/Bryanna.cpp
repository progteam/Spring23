class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> vect;
        vect.push_back(celsius + 273.15);
        vect.push_back(celsius * 1.80 + 32.00);
        return vect;
    }
};
