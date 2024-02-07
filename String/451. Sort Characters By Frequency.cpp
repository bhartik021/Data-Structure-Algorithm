class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char, int> counter;
        
        for(char c : s){
            counter[c]++;
        }
        
        sort(s.begin(), s.end(), 
            [&counter](const char a, const char b){
                return (counter[a] == counter[b]) ? a < b : counter[a] > counter[b];
            });
        
        return s; 
    }
};
