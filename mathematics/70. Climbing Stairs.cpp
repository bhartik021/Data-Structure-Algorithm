class Solution {
public:

int climb(int current, int n) {
    if(current > n) {
        return 0;
    }

    if(current == n) {
        return 1;
    }

    return climb(current + 1, n) + climb(current + 2, n);
}
    int climbStairs(int n) {
    return climb(0, n);    
    }
};
