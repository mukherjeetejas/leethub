class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mnprod = 1, mxprod = 1, ans=nums[0]; 
        for (int i=0;i<nums.size();i++) {
            if (nums[i]<0) swap(mxprod, mnprod);
            mxprod = max(nums[i], mxprod*nums[i]);
            mnprod = min(nums[i], mnprod*nums[i]);
            ans = max(ans, mxprod);
        }
        return ans;
    }
};