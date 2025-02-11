# User function Template for Python3

class Solution:
    def maxLength(self, str):
        # code here
        c = [-1]
        m = 0
        for i in range(len(str)):
            if str[i] == '(':
                c.append(i)
            else:
                c.pop()
                if not c:
                    c.append(i)
                else:
                    m = max(m, i - c[-1])        
        return m
 


#{ 
 # Driver Code Starts
# Initial Template for Python3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        S = input()

        ob = Solution()
        print(ob.maxLength(S))
        print("~")

# } Driver Code Ends