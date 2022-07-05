// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int res = 0;
		    int temp = n;
		    while(temp != 0) {
		        int lastDigit = temp % 10;
		        res = res * 10 + lastDigit;
		        temp = temp / 10;
		    }
		    if(res == n)
		    return "Yes";
		    else 
		    return "No";
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends
