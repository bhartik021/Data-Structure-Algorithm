class Solution {
public:
    int mySqrt(int x) {

        //using pre build function
        //return sqrt(x);

        //using binary search
        long long s = 1, e = INT_MAX;
        
        long long  ans = 0;
        
        while(s <= e) {
            long long m = (s+e)/2;
            
            if(m*m <= x) {
                s = m + 1;
                ans = m;
            } else {
                e = m - 1;
            }
        }
        return ans;
    }
};
