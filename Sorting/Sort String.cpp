#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//cout<<"I am a Software Engineer"<<endl;
	int t;
	cin >> t;
	while(t--) {
	    string s;
	    cin >> s;
	    sort(s.begin(), s.end());
	    cout << s << endl;
	}
	return 0;
}
