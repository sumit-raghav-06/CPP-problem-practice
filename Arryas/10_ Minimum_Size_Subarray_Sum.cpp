class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int currentstate = 0;
        int minlen = INT_MAX;
        for(int right = 0; right < nums.size(); right++){
            currentstate += nums[right];
            while(currentstate >= target){
                minlen = min(minlen, right - left + 1);
                currentstate -= nums[left];
                left++;
            }
        }
        return (maxlen == INT_MAX) ? 0: maxlen;
    }
};
