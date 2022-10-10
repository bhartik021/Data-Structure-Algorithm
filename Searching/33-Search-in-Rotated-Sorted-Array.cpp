class Solution {
public:
    int search(vector<int>& nums, int target) {
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] == target)
        //     return i;
        // }
        // return -1;

        int low = 0, high = nums.size() - 1; 
        while(low <= high) {
            int mid = (low+high)/2;

            if(nums[mid] == target) return mid;

            //the left side is sorted itself
            if(nums[low] <= nums[mid]){
            if(target >= nums[low] && target <= nums[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
            }
            //the right side is sorted itself
            else {
                if(target >= nums[mid] && target <= nums[high]){
                    low = mid + 1;
                }else {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};
