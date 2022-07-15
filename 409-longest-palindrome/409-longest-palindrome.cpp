class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> m;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }
        int count=0;
        int learn=0;
        map<char, int> m2;
        for(int i=0; i<s.size(); i++){
        if(m2[s[i]]==0){
            m2[s[i]]=1;
            if(m[s[i]]%2==1) learn=1;    
            count+=(m[s[i]]/2)*2;
        }
    }
    return count+learn;;
}
};