class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    int duplicate = -1, missing = -1;

    for(int i = 1; i <= nums.size(); i++) {
        int count = 0;
        for(int j = 0; j < nums.size(); j++) {
            if(nums[j] == i) {
                count++;
            }
        }
        if(count == 2) {
            duplicate = i;
        }else if(count == 0) {
            missing = i;
        }
    }  
    return {duplicate, missing};  
    }
};
