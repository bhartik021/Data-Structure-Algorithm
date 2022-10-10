//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    //using linear search
    vector<int> ans;
    for(int i = 0; i < n ; i++) {
        if(arr[i] ==  x) 
        ans.push_back(i);
    }
    if(ans.size() == 0) 
    return {-1, -1};
    else 
    return {ans[0], ans[ans.size() - 1]};
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
