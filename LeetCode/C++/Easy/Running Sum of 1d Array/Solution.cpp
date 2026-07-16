class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // 1. Properly size the result vector so it matches nums
        vector<int> result(nums.size());
        
        // Handle empty array edge case safely
        if (nums.empty()) return result;

        // 2. Set the starting point
        result[0] = nums[0];

        // 3. Start the loop at index 1 since index 0 is already done
        for(int n = 1; n < nums.size(); n++){
            // Next sum = previous accumulated sum + current number
            result[n] = result[n - 1] + nums[n];
        }
        
        return result;
    }
};