class Solution {
public:
    char getClosing(char ch) {
        switch(ch) {
            case '}': return '{'; break;
            case ']': return '['; break;
            case ')': return '('; break;
            //must return something in all control paths
            default: return 'e';
        }
    }
    bool isValid(string s) {
        //stack
        stack<int> stk;
        for (int i=0;i<s.size();i++) {
            if (s[i]=='(' or s[i]=='{' or s[i]=='[') 
                stk.push(s[i]);
            else {
                //if stack doesnt exists then top() will give error
                if (stk.size() and getClosing(s[i])==stk.top()) stk.pop();
                else return false;
            }
        }
        //final stack must be empty
        if (!stk.size()) return true;
        return false;
    }
};