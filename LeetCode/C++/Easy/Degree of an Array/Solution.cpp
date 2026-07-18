#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> count;
        unordered_map<int, int> first_pos;
        unordered_map<int, int> last_pos;
        
        int degree = 0;
        
        // Step 1: Gather frequencies, first positions, and last positions
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            
            // If it's the first time seeing this number, record its index
            if (first_pos.find(num) == first_pos.end()) {
                first_pos[num] = i;
            }
            
            // Always update its last seen index
            last_pos[num] = i;
            
            // Increment its frequency count
            count[num]++;
            
            // Track the maximum frequency (the degree of the array)
            degree = max(degree, count[num]);
        }
        
        // Step 2: Find the minimum subarray length among elements matching the degree
        int min_length = nums.size(); // Start with the maximum possible length
        
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            
            // If this number achieved the maximum degree
            if (count[num] == degree) {
                // Calculate the length of the span from first to last occurrence
                int current_length = last_pos[num] - first_pos[num] + 1;
                
                // Keep the smallest length found
                min_length = min(min_length, current_length);
            }
        }
        
        return min_length;
    }
};