class Solution {
    public int search(int[] nums, int target) {
        int start = 0;
        int end = nums.length - 1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (target < nums[mid]) { // Search left half
                end = mid - 1;
            } else if (target > nums[mid]) { // Search right half
                start = mid + 1;
            } else {
                return mid; // Target found
            }
        }
        
        return -1; // Target not found
    }
}
