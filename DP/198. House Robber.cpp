// Brute Force
// class Solution {
//     public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         int prev = 0, prev2 = 0, current;
//         for(auto x : nums) {
//             current = max(prev, prev2 + x);
//             prev2 = prev;
//             prev = current;
//         }
//         return current;
//     }
// };

// Using Recursion (TLE)
// class Solution {
// public:
// int robHelper(vector<int>&nums, int start) {
//     if(start >= nums.size()) return 0;

//     int robCurrent = nums[start] + robHelper(nums, start + 2);
//     int robSkip = robHelper(nums, start + 1);

//     return max(robCurrent, robSkip);
// }
//     int rob(vector<int>& nums) {
//     return robHelper(nums, 0);  
//     }
// };

// Tabulation (DP)
class Solution {
    public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 0) return 0;
        if(n == 1) return nums[0];

        vector<int>dp(n);

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for(int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        return dp[n - 1];
    }
};
