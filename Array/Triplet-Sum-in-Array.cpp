//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A, A+n);
        for(int i = 0; i < n; i++) {
            int c = A[i];
        
        int t = X - c;
        int s = i+1, e = n-1;
        while(s<e){
            if(A[s] + A[e] == t) return true;
            else if(A[s] + A[e] < t) {
                s++;
            } else e--;
        }
        }
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends
