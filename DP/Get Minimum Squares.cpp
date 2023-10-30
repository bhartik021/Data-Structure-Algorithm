//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

// class Solution{
// 	public:
	
// 	int solve(int n) {
// 	    if(n == 0) return 0;
	    
// 	    int result = n;
// 	    for(int i = 1; i * i <= n; i++) {
// 	        result = min(result, 1 + solve(n - i * i));
// 	    }
// 	    return result;
// 	}
// 	int MinSquares(int n)
// 	{
// 	    // Code here
// 	    return solve(n);
// 	}
// };


class Solution {
    public:
    int MinSquares(int n) {
        vector<int>dp(n + 1, INT_MAX);
            dp[0] = 0;
            for(int i = 1; i <= n; i++) {
                for(int j = 1; j * j <= i; j++) {
                    dp[i] = min(dp[i], dp[i - j * j] + 1);
                }
            }
        return dp[n];
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.MinSquares(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
