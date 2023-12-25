class Solution {
public:
    int numDecodings(string s) {
    if(s.empty() || s[0] == '0') {
        return 0;
    }    

    int n = s.length();
    vector<int>dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2; i <= n; ++i) {
        int oneDigit = s[i - 1] - '0';
        int twoDigit = stoi(s.substr(i - 2, 2));

        if(oneDigit != 0) {
            dp[i] += dp[i - 1];
        }

        if(10 <= twoDigit && twoDigit <= 26) {
            dp[i] += dp[i - 2];
        }
    }
    return dp[n];
    }
};
