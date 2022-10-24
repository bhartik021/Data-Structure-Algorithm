class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // T.C => O(N)
        // S.C. => O(N)
        // int n = nums.size();
        // int temp[n];
        // temp[0] = nums[0];
        // int res = 1;

        // for(int i = 1; i < n; i++){
        //     if(temp[res - 1] != nums[i]){
        //         temp[res] = nums[i];
        //         res++;
        //     }
        // }
        // for(int i = 0; i < n; i++){
        //     nums[i] = temp[i];
        // }
        // return res;

        //==================================================//

        // T.C => O(N)
        // S.C. => O(1)
        int n = nums.size();
        int res = 1;
        for(int i = 1; i < n; i++){
            if(nums[res-1] != nums[i]){
                nums[res] = nums[i];
                res++;
            }
        }
        return res;
    }
};
