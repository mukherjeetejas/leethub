// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        int n = S.size();
        string strn;
        for (int i=0;i<n;i++) {
            while (S[i]==S[i+1]) {
                i++;
            }
            strn+=S[i];
        }
        return strn;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends