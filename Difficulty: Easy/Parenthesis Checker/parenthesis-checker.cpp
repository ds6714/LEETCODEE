//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isParenthesisBalanced(string& s) {
        int n = s.size();
        stack<char> stk;
        for (int i = 0; i < n; i++)
        {
            char ch = s[i];
            if (ch == '(' || ch == '{' || ch == '[')
            {
                stk.push(s[i]);
                continue;
            }
            else if (stk.empty() || (ch == ')' && stk.top() != '(') || (ch == ']' && stk.top() != '[') || (ch == '}' && stk.top() != '{'))
            {
                return false;
            }
            else
            {
                stk.pop();
            }
        }
        return stk.empty();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isParenthesisBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends