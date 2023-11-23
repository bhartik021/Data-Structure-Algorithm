class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
    vector<bool> result;
        for (int i = 0; i < l.size(); i++) {
            result.push_back(isArithmetic(nums, l[i], r[i]));
        }
        return result;
    }

    bool isArithmetic(vector<int>& nums, int l, int r) {
        int maxVal = INT_MIN, minVal = INT_MAX;

        for (int i = l; i <= r; i++) {
            maxVal = max(nums[i], maxVal);
            minVal = min(nums[i], minVal);
        }

        int len = r - l + 1;
        if ((maxVal - minVal) % (len - 1) != 0) {
            return false;
        }

        int diff = (maxVal - minVal) / (len - 1);
        if (diff == 0) {
            return true;
        }

        vector<bool> visited(len, false);

        for (int i = l; i <= r; i++) {
            int val = nums[i];
            if ((val - minVal) % diff != 0) {
                return false;
            } else {
                int pos = (val - minVal) / diff;
                if (visited[pos]) {
                    return false;
                }
                visited[pos] = true;
            }
        }
        return true;    
    }
};
