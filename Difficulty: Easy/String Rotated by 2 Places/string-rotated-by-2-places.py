#User function Template for python3


class Solution:
    #Function to check if a string can be obtained by rotating
    #another string by exactly 2 places.
    def isRotated(self,s1,s2):
        r_s2 = s2[-2:] + s2[:-2]
        l_s2 = s2[2:] + s2[:2]
        if s1 == r_s2 or s1 == l_s2:
            return 1
        else:
            return 0


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER


@atexit.register
def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())


if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        s = str(input())
        p = str(input())
        if (Solution().isRotated(s, p)):
            print("true")
        else:
            print("false")
        print("~")

# } Driver Code Ends