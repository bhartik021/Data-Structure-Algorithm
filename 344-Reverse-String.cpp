class Solution {
public:
    void reverseString(vector<char>& s) {
       //reverse(s.begin(), s.end()); 
       int r = s.size() - 1;
       int l = 0;
       while(l < r) {
           swap(s[l], s[r]);
           l++;
           r--;
       }
    }
};
