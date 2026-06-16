// Level : medium
// platform : leetcode

class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftline =0;
        int rightline = height.size()-1;
        int maxArea = 0;
        while(rightline > leftline){
            int area = min(height[leftline], height[rightline]) * (rightline-leftline);
            maxArea = max(maxArea, area);
            if(height[leftline] < height[rightline]){
                leftline++;
            } else{
                rightline--;
            }
        }
        return maxArea;
    }
};
