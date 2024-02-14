class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res;
    for (int i = 0, j = 0; max(i, j) < nums.size(); ) {
        while (nums[i++] < 0);
        while (nums[j++] > 0);
        res.insert(end(res), {nums[i - 1], nums[j - 1]});
    }
    return res;
    }
};
