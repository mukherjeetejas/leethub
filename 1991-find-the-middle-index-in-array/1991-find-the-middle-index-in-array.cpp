class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int s=0;
        for (auto x:nums) s+=x;
        int ls=0;
        for (int i=0;i<nums.size();i++) {
            if (ls==s-ls-nums[i]) return i;
            ls+=nums[i];
        }
        return -1;
    }
};