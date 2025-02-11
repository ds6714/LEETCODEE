//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GfG {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String s = sc.next();
            int k = sc.nextInt();
            Solution obj = new Solution();
            System.out.println(obj.longestkSubstr(s, k));
        
System.out.println("~");
}
    }
}
// } Driver Code Ends


// User function Template for Java
class Solution {
    public int longestkSubstr(String s, int k) {
        int maxLen = -1;
        int left = 0, right = 0;
        
        HashMap<Character, Integer> mpp = new HashMap<>();
        
        while(right < s.length()) {
            mpp.put(s.charAt(right), mpp.getOrDefault(s.charAt(right), 0) + 1);
            
            while(mpp.size() > k) {
                mpp.put(s.charAt(left), mpp.get(s.charAt(left)) - 1);
                if(mpp.get(s.charAt(left)) == 0) {
                    mpp.remove(s.charAt(left));
                }
                left++;
            }
            if(mpp.size() == k) {
                maxLen = Math.max(maxLen, right - left + 1);
            }
            right++;
        }
        
        return maxLen;
    }
}
