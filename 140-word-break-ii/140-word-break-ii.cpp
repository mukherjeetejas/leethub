class Solution {
public:
    void solve(string s, vector<string> &dict, vector<string> &ans, string osf){
        
        if(s.size() == 0){
            osf.pop_back();
            ans.push_back(osf);
            return;
        }
        
        for(int i=1; i<=s.size(); i++){
            
            string left = s.substr(0, i);
            string right = s.substr(i);
            
            auto it = find(dict.begin(), dict.end(), left);
            if(it != dict.end()){
                solve(right, dict, ans, osf + left + " ");
            }
            
        }
    }

    vector<string> wordBreak(string s, vector<string>& dict)
    {
        vector<string> ans;
        solve(s, dict, ans, "");
        return ans;
    }
    /*
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        
    }*/
};