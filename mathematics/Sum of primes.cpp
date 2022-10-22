//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    bool isPrime(int n) 
    {
        if(n==0 || n ==1)
        return false;
        else if(n == 2 || n == 3)
        return true;
        else if(n % 2 == 0 || n % 3 == 0)
        return false;
        else {
            for(int i = 5; i * i <= n; i+=6)
            if(n%i == 0)
            return false;
        }
        return true;
    }
public:
    int primeSum(int N){
        // code here
        int sum = 0;
        while(N > 0) {
            int temp = N % 10;
            if(isPrime(temp))
            sum+=temp;
            N/=10;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.primeSum(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
