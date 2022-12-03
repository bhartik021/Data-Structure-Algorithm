//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
 bool check(vector<int> &stalls, int n, int cows,int dis)
    {
        int curr_cow_pos = stalls[0];  
       // inially taking current postion of cow as 1st one
        int cnt = 1;                   // taking count of cow
        for(int i=1;i<n;i++)
        {
         // if any cow at dis more than our mid value                                              
         //present then we will keep next cow to that postion
            if(stalls[i]-curr_cow_pos >= dis)
            {
                cnt++;
                curr_cow_pos = stalls[i];
            }
            if(cnt>=cows) 
            return true;
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        
        int l=1,h=stalls[n-1]-stalls[0];
        int ans=0;
        while(l<=h)
        {
            int mid= (l+h)/2;
           // if all cow can be placed at more than mid distance then updating our ans
            if(check(stalls,n,k,mid)) 
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends
