class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res=-1;
        int minEle=INT_MAX;
        for(int i=0; i<nums.size(); i++) {
            minEle=min(minEle,nums[i]);
            if(nums[i]!=minEle)
                res=max(res,nums[i]-minEle);
        }
        return max(res,-1);
    }
};
