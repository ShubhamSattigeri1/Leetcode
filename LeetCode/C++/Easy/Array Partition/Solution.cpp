#include <vector>
#include <algorithm> // Required for sort()
using namespace std;
class Solution {
public:
    int arrayPairSum(std::vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int total_sum = 0;
        // 2. Loop through every even index
        for (int i = 0; i < nums.size(); i += 2) {
            // Add the value at index i, NOT the index number itself!
            total_sum += nums[i]; 
        }
        
        return total_sum;
    }
};