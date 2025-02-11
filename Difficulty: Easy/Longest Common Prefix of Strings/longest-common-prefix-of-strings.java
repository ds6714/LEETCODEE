//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String arr[] = read.readLine().trim().split(" ");

            Solution ob = new Solution();
            String ans = ob.longestCommonPrefix(arr);

            if (ans.isEmpty()) {
                System.out.print("\"\"");
            } else {
                System.out.print(ans);
            }
            System.out.println();
        }
    }
}
// } Driver Code Ends


// User function Template for Java
class Solution {
    public String longestCommonPrefix(String arr[]) 
    {
        int smallest=0;
        
        ArrayList<Character> ans=new ArrayList<>();
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i].length()<arr[smallest].length())
            {
                smallest=i;
            }
        }
        for(int i=0;i<arr[smallest].length();i++)
        {
            ans.add(arr[smallest].charAt(i));
        }
        int count=ans.size();
        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<ans.size();j++)
            {
                if(arr[i].charAt(j)!=ans.get(j))
                {
                    count=Math.min(count,j);
                    break;
                }
            }
        }
        String a="";
        for(int i=0;i<count;i++)
        {
            a=a+ans.get(i);
        }
        return a;
        
    }
}