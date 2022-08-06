class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> mp;
        vector <int> ans;
        int n = nums.size()/3;
        cout<<n;
        for (int i=0;i<nums.size();i++) {
            mp[nums[i]]++;
        }
        for (auto x: mp) {
            if (x.second>n) ans.push_back(x.first);
        }
        return ans;
    }
};