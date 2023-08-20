//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
void Reverse(stack<int>&s, vector<int>&vec) {
    if(s.size() == 0) {
            return;
    }
        
    vec.push_back(s.top());
    s.pop();
    Reverse(s, vec);
    s.push(vec[s.size()]);
    }

    void Reverse(stack<int> &St){
     vector<int>v;
     Reverse(St, v);
     
    // ========= WITHOUT RECURSION ============== // 
     
    // void Reverse(stack<int> &St){
    //   stack<int>s2;
    //   if(St.size() <= 1) {
    //       return;
    //   }
    //   while(!St.empty()) {
    //       int top = St.top();
    //       St.pop();
    //       s2.push(top);
    //   }
    //   St = s2;
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends
