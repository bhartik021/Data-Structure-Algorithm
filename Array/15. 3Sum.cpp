class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
        int n = nums.size();
        
        // Sort the array to easily handle duplicates and for the two-pointer approach
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; i++) {
            // Skip duplicates
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum < 0) {
                    left++;
                } else if (sum > 0) {
                    right--;
                } else {
                    // Found a triplet with zero sum
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Skip duplicates
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    
                    // Skip duplicates
                    while (left < right && nums[right] == nums[right - 1])
                        right--;
                    
                    // Move the pointers
                    left++;
                    right--;
                }
            }
        }
        
        return result;    
    }
};
