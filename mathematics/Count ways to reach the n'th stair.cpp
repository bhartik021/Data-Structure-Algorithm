//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    
    int climb(int current, int n) {
        if(current > n) {
            return 0;
        }
        
        if(current == n) {
            return 1;
        }
        
        return climb(current + 1, n) + climb(current + 2, n);
    }
    int countWays(int n)
    {
        // your code here
        return climb(0, n);
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends
