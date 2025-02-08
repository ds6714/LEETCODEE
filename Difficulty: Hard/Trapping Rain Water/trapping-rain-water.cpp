//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        
        vector<int>ng(n,-1), pg(n,-1);
        int ans = 0;
        stack<int>st;
        
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()] <= arr[i]) st.pop();
            if(!st.empty()) pg[i] = st.top();
            if(st.empty())st.push(i);
        }
        // for(auto &e: pg)cout<<e<<" ";cout<<endl;
        
        while(!st.empty()) st.pop();
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()] <= arr[i] ) st.pop();
            if(!st.empty()) ng[i] = st.top();
            if(st.empty())st.push(i);
        }
        // for(auto &e: ng)cout<<e<<" ";cout<<endl;
        
        
        for(int i=1;i<n-1;i++){
            int maxc = max(0, min(arr[ng[i]],arr[pg[i]])-arr[i]);
            // cout<<arr[i]<<" "<<arr[pg[i]]<<" "<<arr[ng[i]]<<" "<<maxc<<endl;
            ans += maxc;
        }
        return ans;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends