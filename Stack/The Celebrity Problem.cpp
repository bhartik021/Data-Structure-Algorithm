//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int>s;
        for(int i = 0; i < n; i++) {
            s.push(i);
        }
        
        while(s.size() > 1) {
            int first = s.top();
            s.pop();
            int second = s.top();
            s.pop();
            
            if(M[first][second] == 1) {
                s.push(second);
            }else {
                s.push(first);
            }
        }
        int celebrity = s.top();
        
        // check for all rows -> celebrity doesnt know anyone
        for(int i = 0; i < n; i++) {
            if(M[celebrity][i] == 1) {
                return -1;
            }
        }
        for(int i = 0; i < n; i++) {
            if(M[i][celebrity] == 0 && celebrity != i) {
                return -1;
            }
        }
        return celebrity;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends
