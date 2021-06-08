// Problem: https://leetcode.com/problems/find-k-closest-elements/solution/

// O(log(n - k) + k) time, O(1) extra space
// See last method in official solution.

class Solution {
    public List<Integer> findClosestElements(int[] arr, int k, int x) {
        // COPIED FROM OFFICIAL LEETCODE SOLUTION

        // Initialize binary search bounds
        int left = 0;
        int right = arr.length - k;
        
        // Binary search against the criteria described
        while (left < right) {
            int mid = (left + right) / 2;
            if (x - arr[mid] > arr[mid + k] - x) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        // Create output in correct format
        List<Integer> result = new ArrayList<Integer>();
        for (int i = left; i < left + k; i++) {
            result.add(arr[i]);
        }
        
        return result;
    }
}