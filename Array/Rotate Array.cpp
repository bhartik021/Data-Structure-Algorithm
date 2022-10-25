//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    // void lRotateByOne(int arr[], int n) {
    //     int temp = arr[0];
    //     for(int i = 1; i < n; i++) 
    //         arr[i-1] = arr[i];
    //     arr[n-1] = temp;
    // }
    
    // //Function to rotate an array by d elements in counter-clockwise direction. 
    // void rotateArr(int arr[], int d, int n){
    //     // code here
    //     for(int i =0; i < d; i++) {
    //         lRotateByOne(arr, n);
    //     }
    // }
    
    /*==========================================================================*/
    
    //Function to rotate an array by d elements in counter-clockwise direction.
    // void rotateArr(int arr[], int d, int n) {
    //     // code here
    //     T.C. => O(N)
    //     S.C. => O(d)
    //     int temp[d];
    //     for(int i = 0; i < d; i++) {
    //         temp[i] = arr[i];
    //     }
    //     for(int i = d; i < n; i++) {
    //         arr[i-d] = arr[i];
    //     }
    //     for(int i = 0; i < d; i++) {
    //         arr[n-d+i] = temp[i];
    //     }
    // }
    
    /*==========================================================================*/
    
    //Function to rotate an array by d elements in counter-clockwise direction.
    // void rotateArr(int arr[], int d, int n) {
    //       // code here
    //       reverse(arr, 0, d-1);
    //       reverse(arr, d, n-1);
    //       reverse(arr, 0, n-1);
    // }
    // void reverse(int arr[], int low, int high) {
    //     while(low < high) {
    //         swap(arr[low], arr[high]);
    //         low++;
    //         high--;
    //     }
    // }
    
    void rotateArr(int arr[], int d, int n) {
        // code here
         int temp[n];
        for(int i=0; i<n; i++){
            temp[i] = arr[(i+d)%n]; 
        }
        for(int i=0; i<n; i++){
             arr[i] = temp[i];  
        }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
// } Driver Code Ends
