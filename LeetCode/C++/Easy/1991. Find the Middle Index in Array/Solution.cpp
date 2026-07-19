#include <vector>
#include <numeric> // Required for accumulate()

using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total_sum = 0;
        
        // 1. Calculate the grand total of the entire array
        for (int num : nums) {
            total_sum += num;
        }
        
        int left_sum = 0;
        
        // 2. Scan through every possible middleIndex from left to right
        for (int i = 0; i < nums.size(); i++) {
            // Right sum is whatever is left over after subtracting left_sum and the current element
            int right_sum = total_sum - left_sum - nums[i];
            
            // 3. Check if the balance scale is perfectly even
            if (left_sum == right_sum) {
                return i; // Found it! Since we start from 0, this is guaranteed to be leftmost
            }
            
            // Update left_sum to include the current number before moving to the next index
            left_sum += nums[i];
        }
        
        // If we check every index and none balance out, return -1
        return -1;
    }
};