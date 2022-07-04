// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long sumOfSeries(long long N) {
        // code here
        long long sum = N * (N + 1)/2;
        return sum * sum;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}  // } Driver Code Ends
