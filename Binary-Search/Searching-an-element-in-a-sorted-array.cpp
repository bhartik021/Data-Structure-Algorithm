//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       
       // Naive Solution (Using linear Search)
       //for(int i = 0; i < N; i++) {
       //       if(arr[i] == K) return 1;
       //}
       //return -1;
       
       // Optimal Approach (Using Binary Search)
       long long int s = 0;
       long long int e = N - 1;
       
       while(s <= e) {
           long long mid = (s+e)/2;
       
           if(arr[mid] == K){
               return 1;
           }else if(arr[mid] < K){
               s = mid + 1; 
           }else {
               e = mid - 1;
           }
       }
       return -1;
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends
