class Solution {
public:
    int minPairSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int low = 0;
    int high = nums.size() - 1;
    int minMaxPairSum = 0;
    while(low <= high) {
        int currentPairSum = nums[low] + nums[high];
        minMaxPairSum = max(minMaxPairSum, currentPairSum);
        low++;
        high--;
    }    
    return minMaxPairSum;
    }
};
