class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
          int n = nums.size();
        if(n == 0) return nums;
        vector<int> length(n, 1); 
        vector<int> pre(n, -1); 
        
       
        sort(nums.begin(), nums.end());
     
        int maxLength = 0, maxIndex = -1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                if(nums[i] % nums[j] == 0){
                  
                    if(length[j] + 1 > length[i]){
                        length[i] = length[j] + 1;
                        pre[i] = j;
                    }
                }
            }
            if(length[i] > maxLength){
                maxLength = length[i];
                maxIndex = i;
            }
        }
        
        cout << length[maxIndex] << ", " << maxLength << endl;
        vector<int> ans(length[maxIndex]);
        int index = maxIndex;
        
        for(int i = ans.size()-1; i >= 0; i--){
            ans[i] = nums[index];
            index = pre[index];
        }
        
        return ans;
    }
};
