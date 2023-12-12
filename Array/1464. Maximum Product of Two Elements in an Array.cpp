class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int result = 0;
    int current = 0;
      for(int i = 0; i < nums.size(); i++) {
          for(int j = i + 1; j < nums.size(); j++) {
              current = (nums[i] - 1) * (nums[j] - 1);
              result = max(current, result);
          }
      }  
      return result;
    }
};
