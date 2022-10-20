// // { Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// pair<long long, long long> getMinMax(long long a[], int n) ;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         ll a[n];
//         for (int i = 0; i < n; i++) cin >> a[i];

//         pair<ll, ll> pp = getMinMax(a, n);

//         cout << pp.first << " " << pp.second << endl;
//     }
//     return 0;
// }// } Driver Code Ends


// pair<long long, long long> getMinMax(long long a[], int n) {
//     long long int mine = 1000000000001;
//     long long int maxe = 0;
    
//     // max 
//     for(int i = 0; i < n; i++) {
//         if(a[i] > maxe) {
//             maxe = a[i];
//         }
//     }
    
//     // main 
//     for(int i = 0; i < n; i++) {
//         if(a[i] < mine) {
//             mine = a[i];
//         }
//     }
    
//     pair<long long, long>ans;
//     ans.first = mine;
//     ans.second = maxe;
    
//     return ans;
// }

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
 pair<long long, long long>p;
 
 p.first = a[0];
 p.second = a[0];
 
 for(int i = 1; i < n; i++) {
     if(p.first > a[i]){
         p.first = a[i];
     }
     if(p.second < a[i]){
         p.second = a[i];
     }
 }
 return p;
}
