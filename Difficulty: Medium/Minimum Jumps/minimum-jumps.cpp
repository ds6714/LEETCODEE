//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array
class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        int minJumps = 0;
        int currentEnd = 0;
        int currentFarthest = 0;
        for (int index = 0; index < arr.size() - 1; index++)
        {
            currentFarthest = max(currentFarthest, index + arr[index]);
            if (index == currentEnd)
            {
                minJumps += 1;
                currentEnd = currentFarthest;
            }
            if (currentEnd >= n - 1)
            {
                break;
            }
        }
        if (currentEnd < n - 1)
        {
            return -1;
        }
        return minJumps;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends