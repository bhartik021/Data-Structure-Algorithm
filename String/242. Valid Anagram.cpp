class Solution {
public:
    bool isAnagram(string s, string t) {
    // vector<int>vec(26, 0);
    // if(s.length() != t.length()) return false;
    //  for(int i = 0; i < s.length(); i++) {
    //          vec[s[i] - 'a']++;
    //          vec[t[i] - 'a']--;
    //  }   
    //  for(int i = 0; i < 26; i++) {
    //      if(vec[i] != 0) 
    //      return false;
    //  }
    //  return true;
    map<int, int>mp;
    if(s.length() != t.length()) return false;
    for(char c : s) {
        mp[c]++;
    }
    for(char c : t) {
        mp[c]--;
    }
    for(auto k : mp) {
        if(k.second > 0)
        return false;
    }
    return true;
    }
};
