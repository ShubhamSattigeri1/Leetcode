class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // 1. Create a new vector of size 2n to store the answer
        vector<int> result(2 * n);
        
        // 2. Run a single loop from 0 to n
        for (int i = 0; i < n; i++) {
            // Assign the x element to the correct even index in result
            result[2 * i] = nums[i];
            
            result[2 * i + 1] = nums[i + n];
        }
        // 3. Return the new array
        return result;
    }
};

