class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
     vector<int>result;
     for(int i = 0; i <= nums.size() - k; i++) {
         int maxi = nums[i];
         for(int j = i + 1; j < i + k; j++) {
             maxi = max(maxi, nums[j]);
         }
         result.push_back(maxi);
     } 
     return result;  
    }
};
