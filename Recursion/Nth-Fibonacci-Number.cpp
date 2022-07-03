// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        int mod = 1000000007;
        
        int a = 0, b = 1, curr;
        for(int i = 2; i <= n; i++)
        {
            curr = (a % mod + b % mod) % mod;
            a = b;
            b = curr;
        }
        return curr;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
