class Solution {
public:
    int tribonacciUtil(int n, vector<int> &dp) {
        if (n==0) return dp[0] = 0;
        if (n==1 or n==2) return dp[n] = 1;
        if (dp[n]) return dp[n];
        return dp[n] = tribonacciUtil(n-1, dp)+tribonacciUtil(n-2, dp)+tribonacciUtil(n-3, dp);
    }
    int tribonacci(int n) {
        vector<int> dp(n+2);
        return tribonacciUtil(n, dp);
    }
};