//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string removeDups(string s) {
        unordered_set<char> seen;
        string result;

        // Iterate through each character in the string
        for (char c : s) {
            // If the character has not been seen before, add it to the result
            if (seen.find(c) == seen.end()) {
                result += c;
                seen.insert(c);
            }
        }

        return result;
    }
};



//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends