//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

/*Function to find frequency of x
* x : element whose frequency is to be found
* v : input vector
*/
int findFrequency(vector<int> v, int x){
    // Your code here
    
    //Brute force approcah
    // int count = 0;
    // for(int i = 0 ; i < v.size(); i++) {
    //     if(v[i] == x)
    //     count++;
    // }
    // return count;
    
    //using map
    unordered_map<int, int>mp;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == x)
        mp[x]++;
    }
    if(mp.size() != 0) {
        return mp[x];
    }
    return 0;
}

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    // Declaring vector 
	    vector<int> v;
	        
	    // Taking vector element input
	    for(int i = 0;i<N;i++){
	        int k;
	        cin >> k;
	        v.push_back(k);
	    }
	    
	    // element whose frequency to be find
	    int x;
	    cin >> x;
	    cout << findFrequency(v, x) << endl;
	}
	
	return 0;
}
// } Driver Code Ends
