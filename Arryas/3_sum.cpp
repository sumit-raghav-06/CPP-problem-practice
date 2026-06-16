class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size() - 2; i++){
            if(i > 0 && nums[i] == nums[i - 1]) {
            continue;
            }
            int target = - nums[i];
            int left = i +1;
            int right = nums.size() - 1;
            while (left < right){
                int currentsum = nums[left] + nums[right];
                if(currentsum == target){
                    result.push_back({nums[i], nums[left], nums[right]});
                    // skip duplicate left & right
                    while(left < right && nums[left] == nums[left +1 ]) left++;
                    while(left < right && nums[left] == nums[right - 1]) right--;
                    left++;
                    right--;
                }else if (currentsum < target){
                    left++;
                } else{
                    right--;
                }
            }
        }
        return result;
    }
};
