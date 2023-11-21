class Solution {
public:
    int countNicePairs(vector<int>& nums) {
    const int MOD = 1e9 + 7;
        int n = nums.size();
        std::unordered_map<int, int> frequency;

        long long count = 0;

        for (int i = 0; i < n; ++i) {
            int diff = nums[i] - reverseNum(nums[i]);
            count = (count + frequency[diff]) % MOD;
            frequency[diff]++;
        }

        return count;
    }

    private:
    int reverseNum(int num) {
        int reversed = 0;
        while(num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        return reversed;
    }
};
