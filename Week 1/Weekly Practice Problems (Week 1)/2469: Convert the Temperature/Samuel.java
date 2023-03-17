class Solution {
    public double[] convertTemperature(double celsius) {
        double f = celsius * 1.80 + 32.00;
        double k = celsius + 273.15;

        double ans[] = new double[2];
        ans[0] = k;
        ans[1] = f;

        return ans;
    }
}
