class Solution {
public:
    int minOperations(string s) {
    int countForAlternate0 = 0;
        int countForAlternate1 = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0) {
                if (s[i] == '0') {
                    countForAlternate1++;
                } else {
                    countForAlternate0++;
                }
            } else {
                if (s[i] == '1') {
                    countForAlternate1++;
                } else {
                    countForAlternate0++;
                }
            }
        }
        
        return min(countForAlternate0, countForAlternate1);    
    }
};
