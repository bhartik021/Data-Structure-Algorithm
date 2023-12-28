class Solution {
public:
    int getLengthOfOptimalCompression(string s, int k) {
        int n = s.length();
        vector<vector<int>> dp(110, vector<int>(110, 9999)); // Initializing a 2D vector 'dp' of size 110x110 with value 9999
        dp[0][0] = 0; // Initializing the base case where no characters and deletions exist

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= k; j++) {
                int cnt = 0, del = 0;
                for (int l = i; l >= 1; l--) {
                    // Count the frequency of characters from 'i' to 'l'
                    if (s[l - 1] == s[i - 1]) 
                        cnt++;
                    else 
                        del++;
                    
                    // Check if the remaining allowed deletions are valid (j - del >= 0)
                    if (j - del >= 0) {
                        // Update the dp array based on the conditions
                        dp[i][j] = min(dp[i][j],
                            dp[l - 1][j - del] + 1 + (cnt >= 100 ? 3 : cnt >= 10 ? 2 : cnt >= 2 ? 1 : 0));
                    }
                }
                
                // If there are remaining allowed deletions (j > 0), consider the case without deleting current character
                if (j > 0)
                    dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
            }
        }
        return dp[n][k]; // Return the minimum length for 's' with at most 'k' deletions
    }
};


