class Solution {
public:
    int mySqrt(int x) {
        // Base case: The square root of 0 is 0, and 1 is 1.
        if (x == 0 || x == 1) {
            return x;
        }

        // Initialize the binary search range boundaries.
        int low = 1;
        int high = x;
        int ans = 0; // This variable will store our truncated square root result.

        // Standard binary search loop condition
        while (low <= high) {
            // Calculate the midpoint. 
            // Using low + (high - low) / 2 prevents potential integer overflow during addition.
            int mid = low + (high - low) / 2;

            // Cast mid to long long before squaring to avoid integer overflow
            long long square = (long long)mid * mid;

            if (square == x) {
                // If mid squared is exactly x, we found the perfect square root.
                return mid; 
            } 
            else if (square < x) {
                // If mid squared is less than x, mid is a valid floor square root candidate.
                ans = mid;        // Store it as the current best lower-bound answer.
                low = mid + 1;    // Move the lower bound up to check if a larger valid integer exists.
            } 
            else {
                // If mid squared is greater than x, mid is too big.
                high = mid - 1;   // Move the upper bound down to search smaller numbers.
            }
        }

        // Return the stored floor value after the search space is exhausted
        return ans;
    }
};
