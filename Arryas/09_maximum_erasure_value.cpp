class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int left = 0;
        int currentsum = 0;
        int maxsum = 0; // 1 . need variable to store best sum found
        unordered_set<int> seen; // list to check duplicate
        for(int right = 0; right < nums.size(); right++){
            // if duplicate shrink left window
            while(seen.count(nums[right])){
                currentsum -= nums[left];
                seen.erase(nums[left]);
                left++;
            }
            // add a new number
            currentsum += nums[right];
            seen.insert(nums[right]);
            // update the max sum found
            maxsum = max(maxsum, currentsum);
        }
        return maxsum;
    }
};
