class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // 1. Create the new array and setup pointers
        vector<int> result(nums.size());
        int left = 0;
        int right = nums.size() - 1;
        int i = nums.size() - 1; 
        
        // 2. Loop until the pointers meet
        while (left <= right) {
            int left_square = nums[left] * nums[left];
            int right_square = nums[right] * nums[right];
            
            // 3. Compare squares and place the LARGER one at the end of 'result'
            if (left_square > right_square) {
                result[i] = left_square;
                left++; // Move the left pointer forward
            } else {
                result[i] = right_square;
                right--; // Move the right pointer backward
            }
            
            i--; // Move our result position tracker backward
        }
        
        // 4. Return the brand new sorted array
        return result;
    }
};