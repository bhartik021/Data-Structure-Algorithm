class Solution {
public:
    int removeDuplicates(vector<int>& nums) { 
    // int j = 1;
    // for(int i = 0; i < nums.size() - 1; i++) {
    //         if(nums[i] != nums[i + 1]) {
    //             nums[j] = nums[i + 1];
    //             j++;
    //         } 
    // }
    // return j;

    map<int, int> mp;
    for(int i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;
    }

    int i = 0;
    for(map<int, int>::iterator it = mp.begin(); it!=mp.end(); it++) {
        int a = it->first;
        nums[i] = a;
        i++;
    }
    return i;
    }
};
