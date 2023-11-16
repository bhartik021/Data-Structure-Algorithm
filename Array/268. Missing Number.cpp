class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int sizeofArray = nums.size();
    int sizeofElements = sizeofArray * (sizeofArray + 1) / 2;
    int sumofArray = 0;
    for(int i = 0; i < nums.size(); i++) {
        sumofArray += nums[i];
    }
    return sizeofElements - sumofArray;    
    }
};
