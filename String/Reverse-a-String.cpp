//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  //Your code here
//   reverse(str.begin(), str.end());
//   return  str;


int s = 0, e = str.length() - 1;
while(s < e) {
    swap(str[s], str[e]);
    s++;
    e--;
}
return str;
}

