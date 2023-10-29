//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
 	public:
// 	int minSteps(int N) 
// 	{ 
// 	    // Your code goes here
// 	    if(N <= 1) {
// 	        return 0;
// 	    }
	    
// 	    int x =  minSteps(N - 1);
	    
// 	    int y = INT_MAX, z = INT_MAX;
	    
// 	    if(N % 2 == 0) {
// 	        y = minSteps(N / 2);
// 	    }
	    
// 	    if(N % 3 == 0) {
// 	        z = minSteps(N / 3);
// 	    }
	    
// 	    int ans = min(x, min(y, z)) + 1;
	    
// 	    return ans;
// 	} 

int minStepsRequired(int N, vector<int>& ans) {
    if(N <= 1) {
        return 0;
    }
    
    if(ans[N] != 0) {
        return ans[N];
    }
    
    int x = minStepsRequired(N - 1, ans);
    
    int y = INT_MAX, z = INT_MAX;
    
    if(N % 2 == 0) {
        y = minStepsRequired(N/ 2, ans);
    }
    
    if(N % 3 == 0) {
        z = minStepsRequired(N / 3, ans);
    }
    
    int output = min(x, min(y, z)) + 1;
    
    ans[N] = output;
    
    return ans[N];
}

int minSteps(int N) {
    vector<int> ans(N + 1, 0);
    return minStepsRequired(N, ans);
}
 };


//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

       

	    Solution ob;
	    cout << ob.minSteps(n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends
