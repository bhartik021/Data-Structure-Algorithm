//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}
// } Driver Code Ends


//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 
int Search(vector<int> vec, int K) {
    //code here
    
    //Naive Solution(linear Search)
    //for(int i = 0; i < vec.size(); i++) {
    //    if(vec[i] == K)
    //    return i;
    //}
    //return -1;
    
    //Efficient Approach(Binary Search)
    int n = vec.size();
    int l = 0, h = n - 1;
    while(l <= h) {
        int mid = (l+h)/2;
        
        if(vec[mid] == K){
            return mid;
        }else if(vec[l] <= vec[mid]){
            if(K >= vec[l] && K <= vec[mid])
            h = mid - 1;
            else
            l = mid+1;
        }
        else {
            if(K >= vec[mid] && K <= vec[h])
            l = mid+1;
            else
            h = mid-1;
        }
    }
    return -1;
}
