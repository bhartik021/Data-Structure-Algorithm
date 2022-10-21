//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string revStr(string S) {
        // code here
        // reverse(S.begin(), S.end());
        // return S;
        
        int s = 0, e = S.length() - 1;
        while(s < e) {
        swap(S[s], S[e]);
        s++;
        e--;
    }
    return S;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.revStr(S) << endl;
    }
    return 0;
}

// } Driver Code Ends
