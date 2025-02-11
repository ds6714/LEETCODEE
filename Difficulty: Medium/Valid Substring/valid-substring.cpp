//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        stack<int>st;
        st.push(-1);
        int maxlength = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                else{
                    maxlength = max(maxlength, i-st.top());  
            }
        }
       
        }
    return maxlength;    
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.findMaxLen(S) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends