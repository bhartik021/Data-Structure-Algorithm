#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    // int largest = arr[0], secondLargest = -1;
    // for(int i = 1; i < n; i++) {
    //     if(arr[i] > largest){
    //         secondLargest = largest;
    //         largest = arr[i];
    //     }
    //     else if(arr[i] < largest && arr[i] > secondLargest) {
    //         secondLargest = arr[i];
    //     }
    // }
    // return secondLargest;
    sort(arr.begin(), arr.end());
    int i = 0;
    while(i < n) {
        if(arr[n-1] != arr[n-1-i]){
            return arr[n-1-i];
        }else {
            i++;
        }
    }
    return -1;
}
