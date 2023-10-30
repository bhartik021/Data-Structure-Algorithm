// class Solution {
// public:
// int solve(int n) {
//     if(n == 0) return 0;

//     int result = n;
//     for(int i = 1; i <= sqrt(n); i++) {
//         result = min(result, 1 + solve(n - i * i));
//     }

//     return result;
// }
//     int numSquares(int n) {
//        return solve(n); 
//     }
// };

class Solution {
    public:
    int numSquares(int n) {
        vector<int> dp(n + 1, INT_MAX);

        dp[0] = 0;

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j * j <= i; j++) {
                dp[i] = min(dp[i], dp[i - j * j] + 1);
            }
        }
        return dp[n];
    }
};
