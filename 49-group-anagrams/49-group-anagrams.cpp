class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> strs2 = strs;
        map<string, vector<int>> mp; 
        vector<vector<string>> ans;
        for (int i=0;i<strs.size();i++) {
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(i);
        }
        for (auto x: mp) {
            vector<string> ana;
            for (int i=0;i<x.second.size();i++) {
                ana.push_back(strs2[x.second[i]]);
            }
            ans.push_back(ana);
        }
        return ans;
    }
};