class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
    /*
    //brute force    
    // int n = nums.size();
    // int first = -1, last = -1;
    //     for(int i = 0; i < n; i++) {
    //         if(nums[i] == target) {
    //             if(first == -1) {
    //                 first = i;
    //             }
    //             last = i;
    //         }
    //     }
    //     return {first, last};
    */
    
    
    //Using Binary Search
        
    int n = nums.size();
        int first = findFirstOccurrence(nums, target);
        
        if(first == -1) {
            return {-1, -1};
        }
        
        int last = findLastOccurrence(nums, target);
        
        return {first, last};
        
    }
    
    private:
    int findFirstOccurrence(const vector<int> & nums, int target) {
        int first = -1;
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right) {
            int mid = (left + right) / 2;
            if(nums[mid] >= target) {
                right = mid - 1;
            }else {
                left =  mid + 1;
            }
            if(nums[mid] == target) {
                first = mid;
            }
        }
        return first;
    }
    
   
    int findLastOccurrence(const vector<int>&nums, int target) {
        int last = -1;
        int left = 0;
        int right = nums.size() - 1;
        
        while(left <= right) {
            int mid = (left + right) / 2;
            if(nums[mid] <= target) {
                left = mid + 1;
            }else {
                right = mid - 1;
            }
            if(nums[mid] == target) {
                last = mid;
            }
        }
        return last;
    }
};
