//{ Driver Code Starts
import java.io.*;
import java.lang.*;
import java.util.*;
import java.util.stream.*;

class GFG {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {
            String s1 = br.readLine(); // first string
            String s2 = br.readLine(); // second string

            Solution obj = new Solution();

            if (obj.areAnagrams(s1, s2)) {
                System.out.println("true");
            } else {
                System.out.println("false");
            }
            System.out.println("~");
        }
    }
}
// } Driver Code Ends


class Solution {
    // Function is to check whether two strings are anagram of each other or not.
    public static boolean areAnagrams(String s1, String s2) {
        if(s1.length()!=s2.length()){
            return false;
        }
    
        HashMap<Character,Integer> map1 = new HashMap<>();
        for(int i=0; i<s1.length();i++){
             map1.put(s1.charAt(i),map1.getOrDefault(s1.charAt(i),0)+1);
             map1.put(s2.charAt(i),map1.getOrDefault(s2.charAt(i),0)-1); 
        }
        
        for(char key:map1.keySet()){
            if(map1.get(key)!=0){
                return false;
            }
        }
        return true;
    }
    
        
}

