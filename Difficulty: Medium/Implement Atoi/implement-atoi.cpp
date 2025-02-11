//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
        
        int i = 0  , sign = 1; long long ans =0;
        // whitespaces
        while(s[i]==' ') i++;
        
        // checking sign
        if(s[i]=='-'){
            sign = -1 ; 
            i++;
        }
        
        // check for starting 0
        while(s[i]=='0') i++;
        
        // converting string to int
        while(s[i]>='0'&&s[i]<='9'){
            int d = s[i] - '0';
            ans = ans *10+d;
            i++;
        }
        
        // handling limit of the answer
        if(ans*sign>INT_MAX) return INT_MAX*sign;
        if(ans*sign<INT_MIN) return INT_MIN*sign;
        
        return (int)ans*sign;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends