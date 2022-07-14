class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        uint32_t a=pow(2,31);
        
        while(a){
		
		//when bit is set in both a and n, then we will add 1 to the ans
		//at any point, only one bit is going to be set in a, as it is power of 2 only
            if((n&a)){
                ans++;
            }
            a/=2;
        }
        return ans;
    }
};