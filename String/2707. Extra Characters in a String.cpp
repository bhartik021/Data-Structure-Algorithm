class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
    int max_val = s.length() + 1;
        vector<int> dp(s.length() + 1, max_val);
        dp[0] = 0;

        unordered_set<string> dictionary_set(dictionary.begin(), dictionary.end());

        for (int i = 1; i <= s.length(); ++i) {
            dp[i] = dp[i - 1] + 1;
            for (int l = 1; l <= i; ++l) {
                if (dictionary_set.find(s.substr(i - l, l)) != dictionary_set.end()) {
                    dp[i] = min(dp[i], dp[i - l]);
                }
            }
        }
        return dp.back();    
    }
};
