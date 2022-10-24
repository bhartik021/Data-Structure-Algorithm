class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0){
                 for(int j = n-1; j > i; j--){
                    if(nums[j] != 0)
                    swap(nums[i], nums[j]);
                }
            }
        }
    }
};
