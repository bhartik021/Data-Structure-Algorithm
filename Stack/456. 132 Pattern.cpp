class Solution {
public:
    bool find132pattern(vector<int>& nums) {
    int n = nums.size();
        if (n < 3) return false;

        std::vector<int> minValues(n);
        minValues[0] = nums[0];

        for (int i = 1; i < n; i++) {
            minValues[i] = std::min(minValues[i - 1], nums[i]);
        }

        std::stack<int> s;

        for (int j = n - 1; j >= 0; j--) {
            if (nums[j] > minValues[j]) {
                while (!s.empty() && s.top() <= minValues[j]) {
                    s.pop();
                }
                if (!s.empty() && s.top() < nums[j]) {
                    return true;
                }
                s.push(nums[j]);
            }
        }

        return false;
    }
};
