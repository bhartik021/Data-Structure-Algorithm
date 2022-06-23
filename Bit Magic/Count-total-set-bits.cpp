// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    
    int max2(int n) {
        int c = 0;
        while((1 << c) <= n) {
            c++;
        }
        return c - 1;
    }
    
    int countSetBits(int n)
    {
        // Your logic here
        if(n == 0)
        return 0;
        int x = max2(n);
        int ans = x * ( 1 << (x -1)) + (n - (1 << x)) + 1 + countSetBits(n - (1<<x));
        return ans;
    }
};


// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends
