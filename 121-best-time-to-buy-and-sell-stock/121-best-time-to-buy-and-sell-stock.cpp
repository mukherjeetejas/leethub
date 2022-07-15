class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0]; int maxprof=0;
        for (int i=0;i<prices.size();i++) {
            if (prices[i]<min) {
                min = prices[i];
            }
            if (maxprof<(prices[i]-min)) {
                maxprof = prices[i] - min;
            }
        }
        return maxprof;
    }
};