// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long sumOfFifthPowers(long long N) {
        // code here
        long long i, sum = 0;
        for(i = 1; i <= N; i++) {
            sum = sum + i * i * i * i * i;
        }
        return sum;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfFifthPowers(N) << "\n";
    }
}  // } Driver Code Ends
