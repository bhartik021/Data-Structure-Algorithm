class Solution {
public:
    int strStr(string haystack, string needle) {
        // return haystack.find(needle);
        for(int i = 0; i < haystack.length(); i++) {
            if(haystack[i] == needle[0]) {
                int i1 = i+1;
                int j = 1;
            while(haystack[i] && needle[j]) {
                if(haystack[i1] != needle[j]) break;
                i1++;
                j++;
            }
            if(j == needle.length()) return i;
        }
        }
        return -1;
    }
};
