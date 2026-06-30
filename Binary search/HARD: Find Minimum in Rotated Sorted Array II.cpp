// THIs problem can solveed by 2 meth


//--------------------------------------FIRST---------------------------------------
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        while(low < high){
            int mid = low+(high - low)/2;
            if(nums[mid] > nums[high]){
                low = mid+1;
            } else{
                high = mid;
            }
        }
        return nums[low];
    }
};


// --------------------------------------SECOND----------------------------------

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            //method 2:  Check and trim duplicates from both sides first!
            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                left++;
                right--;
                continue; // Skip the rest and recalculate mid
            }
            
            // Now safely find the minimum drop-off point
            if (nums[mid] > nums[right]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        return nums[left];
    }
};
