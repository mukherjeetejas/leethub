class Solution {
public:
    static bool cmp (string s1, string s2) {
        return s1.size()<s2.size();
    }
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end(), cmp);
        string lcp=strs[0];
        for (int i=1;i<strs.size();i++) {
            int j = 0; string t="";
            while (strs[i][j]==lcp[j] and j<lcp.size()) {
                t+=lcp[j];
                j++;
            }
            lcp=t;
            if (lcp=="") return lcp;
        }
        return lcp;
    }
};