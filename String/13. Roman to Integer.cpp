class Solution {
public:
    int romanToInt(string s) {
       map<char, int>mp {
           {'I', 1}, 
           {'V', 5},
           {'X', 10},
           {'L', 50},
           {'C', 100},
           {'D', 500},
           {'M', 1000},
       };
       int value = 0;
       for(int i = 0; i < s.size(); i++) {
           if(mp[s[i]] < mp[s[i+1]]) 
            value -= mp[s[i]];
            else
            value += mp[s[i]];
       }
       return value;
    }
};
