class Solution {
public:
    bool isPowerOfFour(int n) {
     if(n <= 0) 
        return false;
     double logResult = log(n) / log(4);
     return logResult == int(logResult); 
    }
};
