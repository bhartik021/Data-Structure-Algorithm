// class Solution {
// public:

// int climb(int current, int n) {
//     if(current > n) {
//         return 0;
//     }

//     if(current == n) {
//         return 1;
//     }

//     return climb(current + 1, n) + climb(current + 2, n);
// }
//     int climbStairs(int n) {
//     return climb(0, n);    
//     }
// };

class Solution {
    public:
    int climbStairs(int n) {
        if(n <= 2) return n;

        int dp[n + 1];
        dp[1] = 1;
        dp[2] = 2;

        for(int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};
