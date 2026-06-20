class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1, end = -1;

        // 1. Find the first occurrence
        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2; // Find the middle
            if (nums[mid] == target) {
                start = mid;     // Found it! But...
                high = mid - 1;  // Look left to see if it starts earlier
            } else if (nums[mid] < target) {
                low = mid + 1;   // Too small, look right
            } else {
                high = mid - 1;  // Too big, look left
            }
        }

        // 2. Find the last occurrence
        low = 0, high = nums.size() - 1; // Reset our bounds
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                end = mid;       // Found it! But...
                low = mid + 1;   // Look right to see if it ends later
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return {start, end};
    }
};
