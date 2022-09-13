class Solution {
public:
    int fib(int n) {
        int dp[n+2];
        memset(dp, -1, sizeof(dp));
        dp[0]=0; dp[1]=1;
        return fibUtil(n, dp);
    }
    int fibUtil (int n, int* dp) {
        if (n==0) return 0;
        if (n==1) return 1;
        if (dp[n]!=-1) return dp[n];
        return dp[n] = (fibUtil(n-1,dp)+fibUtil(n-2,dp));
    }
};