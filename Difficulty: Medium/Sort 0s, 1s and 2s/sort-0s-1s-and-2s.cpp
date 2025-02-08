//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
   map<int,int> mp;
        for(int num : arr){
            mp[num]++;
        }
        for(int i = 0; i<mp[0]; i++){
            arr[i] = 0;
        }
        for(int j = mp[0]; j<mp[1]+mp[0]; j++){
            arr[j] = 1;
        }
        for(int k = mp[0]+mp[1]; k<mp[2]+mp[1]+mp[0]; k++){
            arr[k] = 2;
        }
        
    }
        
  };

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends