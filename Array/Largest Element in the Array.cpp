#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    // Time Complexity => O(nlogn(n))
    // sort(arr.begin(), arr.end());
    // return arr[n-1];

    int count = arr[0];
    for(int i = 0; i <= n - 1; i++) {
        if(count < arr[i]) {
            count = arr[i];
        }
    }
    return count;
}
