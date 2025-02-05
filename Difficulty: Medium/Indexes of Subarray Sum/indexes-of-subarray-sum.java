//{ Driver Code Starts
import java.io.*;
import java.util.*;

class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine().trim());

        while (t-- > 0) {
            String line = read.readLine().trim();
            String[] numsStr = line.split(" ");
            int[] nums = new int[numsStr.length];
            for (int i = 0; i < numsStr.length; i++) {
                nums[i] = Integer.parseInt(numsStr[i]);
            }

            int d = Integer.parseInt(read.readLine().trim());

            Solution ob = new Solution();
            ArrayList<Integer> result = ob.subarraySum(nums, d);
            // Print all elements in the result list
            for (int i : result) {
                System.out.print(i + " ");
            }
            System.out.println(); // Print a new line after the result
            System.out.println("~");
        }
    }
}

// } Driver Code Ends

class Solution {
    static ArrayList<Integer> subarraySum(int[] arr, int target) {
       int l=0;
       int n=arr.length;
       int sum=arr[0];
       ArrayList<Integer> ans=new ArrayList<>();
       if(arr[0]==target){  //edge case
           ans.add(1);
           ans.add(1);
           return ans;
       }
       for(int r=1;r<n;r++){
           sum += arr[r];
           while(sum>target){
               sum -=arr[l];
               l++;
           }
           if(sum==target){
               ans.add(l+1);
               ans.add(r+1);
               break;
           }
       }
       if(ans.size()>0){
           return ans;
       }
       ans.add(-1);
       return ans;
    }
}


