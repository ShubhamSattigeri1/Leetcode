#include <vector>

using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        // 1. Declare an empty target vector
        vector<int> target;
        
        // 2. Loop through both input arrays
        for (int i = 0; i < nums.size(); i++) {
            // 3. Insert nums[i] at position index[i]
            target.insert(target.begin() + index[i], nums[i]);
        }
        
        // 4. Return the result
        return target;
    }
};