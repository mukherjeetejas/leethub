class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tsum=0;
        for (auto x: nums) {
            tsum += x;
        }
        int ls = 0; 
        for (int i=0;i<nums.size();i++) {
            if (ls==tsum-nums[i]-ls) {
                return i;
            }
            ls += nums[i];
        }
        return -1;
    }
};