class Solution {
public:
    char getClosing(char ch) {
        switch(ch) {
            case '}': return '{'; break;
            case ']': return '['; break;
            case ')': return '('; break;
            default: return 'e';
        }
    }
    bool isValid(string s) {
        stack<int> stk;
        for (int i=0;i<s.size();i++) {
            if (s[i]=='(' or s[i]=='{' or s[i]=='[') 
                stk.push(s[i]);
            else {
                if (stk.size() and getClosing(s[i])==stk.top()) stk.pop();
                else return false;
            }
        }
        if (!stk.size()) return true;
        return false;
    }
};