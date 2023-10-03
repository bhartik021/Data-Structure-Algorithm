class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i; j < n; j++) {
            if(nums[i] == nums[j] && i < j)
                count++;
        }
    }    
    return count;
    }
};
