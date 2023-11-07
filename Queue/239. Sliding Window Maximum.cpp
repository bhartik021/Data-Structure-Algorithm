class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    //  vector<int>ans;
    //  for(int i = 0; i <= nums.size() - k; ++i) {
    //      int maxValue = nums[i];
    //      for(int j = 1; j < k; ++j) {
    //          if(nums[i + j] > maxValue) {
    //              maxValue = nums[i + j];
    //          }
    //      }
    //      ans.push_back(maxValue);
    //  }   
    //  return ans;
    // }
    // vector<int>ans;
    // for(int i = 0; i <= nums.size() - k; ++i) {
    //     int maxValue = INT_MIN;
    //     for(int j = i; i < i + k; j+=1) {
    //         maxValue = max(maxValue, nums[j]);
    //     }
    // }
    // return ans;
    // }
    // vector<int> ans;
    //     for (int i = 0; i <= nums.size() - k; ++i) {
    //         int maxValue = nums[i];
    //         for (int j = i + 1; j < i + k; j++) {
    //             maxValue = max(maxValue, nums[j]);
    //         }
    //         ans.push_back(maxValue);
    //     }
    //     return ans;
    // }
    deque<int>dq;
    vector<int>ans;
    for(int i = 0; i < nums.size(); i++) {
        if(!dq.empty() && dq.front() == i - k)
        dq.pop_front();

        while(!dq.empty() && nums[dq.back()] < nums[i]){
        dq.pop_back();
        }

        dq.push_back(i);
        if(i >= k - 1) ans.push_back(nums[dq.front()]);
    }
    return ans;
    }
};
