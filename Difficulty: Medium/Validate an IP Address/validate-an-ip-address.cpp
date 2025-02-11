//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string& s) {
        // code here
         int n = s.length();
        if(s[0]=='.')
            return 0;
        int cntDots{0};
        for(int i{0};i<n;i++){
            int num{0};
            if(i<n-1)
                if(s[i]=='0' && s[i+1]!='.') return 0;
            while(i<n && s[i]!='.'){
                num = num*10 + s[i]-'0';
                i++;
            }
            if(i<n){
                cntDots++;
                if(s[i]==s[i+1])
                    return 0;
            }
            if(cntDots>3)
                return 0;
            if(!(num>=0 && num<=255))
                return 0;
        }
        return (cntDots!=3)?0:1;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends