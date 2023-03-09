//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int stringComparsion(string s1, string s2);


int main() 
{


   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s1, s2;
   		cin >> s1 >> s2;

   		
   		cout << stringComparsion(s1, s2) << "\n";
   	}

    return 0;
}

// } Driver Code Ends



int stringComparsion(string s1,string s2)
{
    // Your code goes here
    if(s1 == s2) return 0;
    
    int i = 0, j = 0;
    while(s1[i] != '\0' || s2[j] != '\0') {
        if(s1[i] > s2[j]) return 1;
        if(s1[i] < s2[j]) return -1;
        if(s1[i] == 'n' && s1[i + 1] == 'g' && s2[j + 1] != 'g') return 1;
        if(s2[j] == 'n' && s2[j + 1] == 'g' && s1[i + 1] != 'g') return -1;
        i++;
        j++;
    }
}
