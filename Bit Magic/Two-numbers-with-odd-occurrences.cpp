// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<int> twoOddNum(int Arr[], int N)  
    {
        // code here
       vector<int>ans;
       int res1 = 0, res2 = 0;
       int XOR = 0;
       for(int i = 0; i < N; i++) {
           XOR = XOR^Arr[i];
       }
       int rightMostBit = XOR & ~ (XOR - 1);
       for(int i = 0; i < N; i++) {
           if((Arr[i] & rightMostBit) != 0) {
               res1 = res1^Arr[i];
           }else {
               res2 = res2^Arr[i];
           }
       }
       ans.push_back(res1);
       ans.push_back(res2);
       sort(ans.rbegin(), ans.rend());
       return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int Arr[N];
        for(int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<int>ans=ob.twoOddNum(Arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
