class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) { 
            int mid = left + (right - left) / 2; 
            
            if (nums[mid] > mid) {
                right = mid - 1; 
            } else {
                left = mid + 1;
            }
        } 
        
        return left;
    }
};
