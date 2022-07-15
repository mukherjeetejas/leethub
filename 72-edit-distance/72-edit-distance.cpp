class Solution {
public:
    int minDistance(string s, string t) {
        int n = s.size(); int m = t.size();
        int DP[n+1][m+1];
        for (int i=0;i<=m;i++) {
            DP[0][i] = i;
        }
        for (int i=0;i<=n;i++) {
            DP[i][0] = i;
        }
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=m;j++) {
                if (s[i-1] == t[j-1]) DP[i][j] = DP[i-1][j-1];
                else 
                DP[i][j] = min(DP[i-1][j], min (DP[i][j-1], DP[i-1][j-1])) + 1;
            }
        }
        return DP[n][m];
    }
};