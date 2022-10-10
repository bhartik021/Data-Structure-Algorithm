//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
        //Naive approach using linear search
        // int res = 0;
        // for(int i = 0; i < n; i++){
        //     res ^= arr[i];
        // }
        // return res;
        
        //optimized approach using binary search
        int l = 0, h = n - 2;
        while(l <= h){
            int mid = (l+h)/2;
            if(arr[mid] == arr[mid^ 1]){
            l = mid + 1;
            }
            else{
                h = mid - 1;
            }
            }
        return arr[l];
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
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends
