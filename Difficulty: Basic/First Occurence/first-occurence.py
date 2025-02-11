#Function to locate the occurrence of the string x in the string s.
class Solution:
    def firstOccurence(self,txt,pat):
        #code here
        pat_len = len(pat)
        txt_len = len(txt)
        for i in range(txt_len):
            for j in range(pat_len):
                if pat[j:j+pat_len] == txt[i:i+pat_len]:
                    return i
                
        return -1



#{ 
 # Driver Code Starts
#Contributed by : Nagendra Jha

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
    for cases in range(t):
        s = input()
        p = input()
        ob = Solution()
        print(ob.firstOccurence(s, p))

        print("~")

# } Driver Code Ends