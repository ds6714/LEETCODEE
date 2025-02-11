//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     
      string xyz(string &s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1);  
   
    }
   
    string longestPalindrome(string s) {
         string max_str = "";
        int n = s.size();
        
    
        for (int i = 0; i < n; i++) {
            string odd = xyz(s, i, i);      
            if (odd.length() > max_str.length()) 
                max_str = odd;
            
      
            string even = xyz(s, i, i + 1);
            if (even.length() > max_str.length()) 
                max_str = even;
        }
        
        return max_str;   
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
        cout << ob.longestPalindrome(S) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends