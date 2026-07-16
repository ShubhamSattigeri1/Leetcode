class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // 1. Properly define 'n' using the actual size of the array
        int n = nums.size();
        
        // 2. Create the 'ans' vector yourself, giving it a size of 2 * n
        vector<int> ans(2 * n);
        
        for(int i = 0; i < n; i++){
            ans[i] += nums[i];
            ans[i+n] += nums[i];
        }return  ans;
    }
};