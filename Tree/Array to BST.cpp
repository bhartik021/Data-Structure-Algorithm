//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

void makeBST(vector<int>& nums, vector<int>& ans, int low, int high) {
    if(low > high) return;
    
    int mid = (low + high) / 2;
    ans.push_back(nums[mid]);
    
    makeBST(nums, ans, low, mid - 1);
    makeBST(nums, ans, mid + 1, high);
    
    return;
    
}

    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int>ans;
        int low = 0, high = nums.size() - 1;
        makeBST(nums, ans, low, high);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends
