class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int candidate1 = 0, candidate2 = 0, count1 = 0, count2 = 0;
        // First pass to find potential candidates
        for (auto num : nums) {
            if (candidate1 == num) count1++;
            else if (candidate2 == num) count2++;
            else if (count1 == 0) candidate1 = num, count1 = 1;
            else if (count2 == 0) candidate2 = num, count2 = 1;
            else count1--, count2--;
        }
         // Second pass to verify candidates
        count1 = count2 = 0;
        for (int num : nums) {
            if (num == candidate1) count1++;
            else if (num == candidate2) count2++;
        }
        
        vector<int> ans;
        if (count1 > nums.size() / 3) ans.push_back(candidate1);
        if (count2 > nums.size() / 3) ans.push_back(candidate2);
        
        return ans;    
    }
};
