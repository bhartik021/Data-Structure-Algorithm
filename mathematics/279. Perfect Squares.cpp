class Solution {
public:
int solve(int n) {
    if(n == 0) return 0;

    int result = n;
    for(int i = 1; i <= sqrt(n); i++) {
        result = min(result, 1 + solve(n - i * i));
    }

    return result;
}
    int numSquares(int n) {
       return solve(n); 
    }
};
