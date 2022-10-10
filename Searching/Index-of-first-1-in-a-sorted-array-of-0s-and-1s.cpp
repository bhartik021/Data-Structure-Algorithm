//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        // Your code goes here
        
        
        // Brute force approcah using linear search
        //for(int i = 0; i < n; i++) {
        //    if(a[i] == 1) return i;
        //}
        //return -1;
        
        
        // Optimal approach using binary search
        
        int s = 0;
        int e = n - 1;
        int ans = -1;
        
        while(s <= e) {
            int mid = (s+e)/2;
            if(a[mid] == 1) {
                ans = mid;
                e = mid - 1;
            }else if(a[mid] < 1){
                s = mid + 1;
            }else {
                e = mid - 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.firstIndex(a, n) << endl;
    }
}
// } Driver Code Ends
