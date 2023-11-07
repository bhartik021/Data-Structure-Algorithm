//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        // vector<int>ans;
        // for(int i = 0; i <= n - k; ++i) {
        //     int maxValue  = arr[i];
        //     for(int j = 1; j < k; ++j) {
        //         if(arr[i + j] > maxValue) {
        //             maxValue = arr[i + j];
        //         }
        //     }
        //     ans.push_back(maxValue);
        // }
        // return ans;
        // vector<int>ans;
        // for(int i = 0; i <= n - k; ++i) {
        //     int maxValue  = INT_MIN;
            
        //     for(int j = i; j < i+k; j += 1) {
        //         maxValue = max(maxValue, arr[j]);
        //     }
            
        //     ans.push_back(maxValue);
        // }
        // return ans;
        // vector<int> ans;
        // for (int i = 0; i <= n - k; ++i) {
        //     int maxValue = arr[i];
        //     for (int j = i + 1; j < i + k; j++) {
        //         maxValue = max(maxValue, arr[j]);
        //     }
        //     ans.push_back(maxValue);
        // }
        // return ans;
        deque<int>dq;
        vector<int>ans;
        for(int i = 0; i < n; i++) {
            if(!dq.empty() && dq.front() == i - k) {
                dq.pop_front();
            }
            
            while(!dq.empty() && arr[dq.back()] < arr[i]) {
                dq.pop_back();
            }
            
            dq.push_back(i);
            if(i >= k - 1) {
                ans.push_back(arr[dq.front()]);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
