class Solution:
    def inversionCount(self, arr):
        # Function to count inversions in the array
        return self.mergeSort(arr, 0, len(arr) - 1)

    def mergeSort(self, arr, l, r):
        # Base case
        if l >= r:
            return 0
        
        mid = (l + r) // 2
        inv_count = 0
        
        # Count inversions in the left and right halves
        inv_count += self.mergeSort(arr, l, mid)
        inv_count += self.mergeSort(arr, mid + 1, r)
        
        # Count inversions while merging the two halves
        inv_count += self.merge(arr, l, mid, r)
        
        return inv_count

    def merge(self, arr, l, mid, r):
        # Temporary arrays to store left and right subarrays
        left = arr[l:mid+1]
        right = arr[mid+1:r+1]
        
        i = j = 0
        k = l
        inv_count = 0
        
        # Merge the two subarrays and count inversions
        while i < len(left) and j < len(right):
            if left[i] <= right[j]:
                arr[k] = left[i]
                i += 1
            else:
                arr[k] = right[j]
                inv_count += (mid - i + 1 - l)
                j += 1
            k += 1
        
        # Copy the remaining elements
        while i < len(left):
            arr[k] = left[i]
            i += 1
            k += 1
        
        while j < len(right):
            arr[k] = right[j]
            j += 1
            k += 1
        
        return inv_count


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
    for tt in range(t):
        a = list(map(int, input().strip().split()))
        obj = Solution()
        print(obj.inversionCount(a))
        print("~")

# } Driver Code Ends