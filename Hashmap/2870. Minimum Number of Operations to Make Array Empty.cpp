class Solution {
public:
    int minOperations(vector<int>& nums) {
    std::unordered_map<int, int> numCount;
        
        for (int num : nums) {
            numCount[num]++;
        }
        
        int operations = 0;
        
        for (const auto& [num, count] : numCount) {
            int remainingCount = count;
            while (remainingCount > 0) {
                if (remainingCount == 1) {
                    return -1;
                }
                if (remainingCount == 4 || remainingCount == 2) {
                    remainingCount -= 2;
                    operations++;
                } else {
                    remainingCount -= 3;
                    operations++;
                }
            }
        }
        
        return operations;
    }
};
