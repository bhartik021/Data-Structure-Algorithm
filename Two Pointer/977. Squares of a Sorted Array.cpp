class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    int low = 0, high = nums.size() - 1;
    vector<int>ans(nums.size());
    for(int i = n - 1; i >= 0; i--) {
        if(abs(nums[low]) > abs(nums[high])) {
            ans[i] = nums[low] * nums[low];
            low++;
        }else {
            ans[i] = nums[high] * nums[high];
            high--;
        }
    }  
    return ans;  
    }
};
