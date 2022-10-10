//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       // Brute force approcah using linear search
       //if(n == 1) return 0;
       
       //if(arr[0] >= arr[1]) return 0;
       
       //if(arr[n - 1] >= arr[n - 2]) return (n - 1);
       
       //for(int i = 1; i < n - 1 ; i++){
       //       if(arr[i] >= arr[i -1] && arr[i] >= arr[i + 1])
       //    return i;
       //}
       
       // Optimal Approach Using Binary Search
       int s = 0, e = n - 1;
       
       while(s < e) {
           int mid = (s+e)/2;
           if(arr[mid] < arr[mid+1]) 
           s = mid + 1;
           else e = mid;
       }
       return s;
    }
    
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			tmp[i] = a[i];
		}
		bool f=0;
		Solution ob;
		
		int A = ob. peakElement(tmp,n);
		
		if(A<0 and A>=n)
		    cout<<0<<endl;
		else
		{
    		if(n==1 and A==0)
    		    f=1;
    		else if(A==0 and a[0]>=a[1])
    		    f=1;
    		else if(A==n-1 and a[n-1]>=a[n-2])
    		    f=1;
    		else if(a[A]>=a[A+1] and a[A]>= a[A-1])
    		    f=1;
    		else
    		    f=0;
    		cout<<f<<endl;
		}
		
	}

	return 0;
}
// } Driver Code Ends
