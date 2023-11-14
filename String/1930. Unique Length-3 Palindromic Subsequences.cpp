class Solution {
public:
    int countPalindromicSubsequence(string s) {
    int n = s.size();
        int count = 0;

        for (char c = 'a'; c <= 'z'; ++c) {
            int first = -1, last = -1;

            for (int i = 0; i < n; ++i) {
                if (s[i] == c) {
                    if (first == -1) {
                        first = i;
                    }
                    last = i;
                }
            }

            if (first != -1) {
                unordered_set<char> uniqueChars;

                for (int i = first + 1; i < last; ++i) {
                    uniqueChars.insert(s[i]);
                }

                count += uniqueChars.size();
            }
        }

        return count;    
    }
};
