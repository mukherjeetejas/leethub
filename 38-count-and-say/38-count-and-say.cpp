class Solution {
public:
    string countAndSay(int n) {
        if (n==1) return "1";
        string prev = countAndSay(n-1);
        string fin = "";
        for (int i=0; i<prev.size(); i++) {
            int temp = 0;
            while (prev[i] == prev[i+1]) {
                temp ++;
                i++;
            }
            fin += to_string(temp+1) + prev[i];
        }
        return fin;
    }
};