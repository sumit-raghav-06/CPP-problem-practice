class Solution {
  public:
    void reverseHelper(vector<int> &arr, int left, int right) {
        // base stop when pointers meet or cross
        if(left>=right){
            return;
        }
        // code here
        // swap ele, at the curr. pos.
        swap(arr[left], arr[right]);
        // rec. call
        reverseHelper( arr, left+1, right -1);
    }
    //the main fun call
    void reverseArray(vector<int> &arr){
        reverseHelper(arr, 0, arr.size()-1);
    }
};
