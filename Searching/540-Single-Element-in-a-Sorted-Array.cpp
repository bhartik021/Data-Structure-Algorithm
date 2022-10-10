class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int res = 0;
        // for(int i = 0; i < nums.size(); i++) {
        //     res ^= nums[i];        
        // }
        // return res;

        int low = 0, high = nums.size() - 2;

        while(low <= high) {
            int mid = (low+high)/2;
            if(nums[mid] == nums[mid^1]){
                low = mid + 1;
            }else {
                high = mid - 1;
            }
        }
        return nums[low];
    }
};
