class Solution {
public:
    int countHomogenous(string s) {
    int left = 0;
    long long res = 0;

    for(int i = 0; i < s.length(); i++) {
        if(s[left] == s[i]) {
            res += i - left + 1;
        }else {
            res += 1;
            left = i;
        }
    }
    return (int) (res % (1000000007));
    }
};
