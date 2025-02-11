//{ Driver Code Starts
// C++ program to check if two strings are isomorphic

#include <bits/stdc++.h>

using namespace std;
#define MAX_CHARS 256


// } Driver Code Ends

class Solution {
  public:
    // Function to check if two strings are isomorphic.
    bool areIsomorphic(string &s1, string &s2) {

        // Your code here
        map<char,char> mp;
        map<char,char> mp2;

        
        if(s1.length() != s2.length()) return false;
        
        for(int i=0; i<s1.length() ;i++)
        {
            if(mp.count(s1[i]) && mp[s1[i]] != s2[i])
            return false;
            
            if(mp2.count(s2[i]) && mp2[s2[i]] != s1[i])
            return false;
            
            mp[ s1[i] ]= s2[i];
            mp2[ s2[i] ]= s1[i];
        }
        
        
        
        return true;
        
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    string s1, s2;
    while (t--) {
        cin >> s1;
        cin >> s2;
        Solution obj;
        int r = obj.areIsomorphic(s1, s2);
        if (r) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends