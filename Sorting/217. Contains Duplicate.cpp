class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        //Brute force approcah
        // T.C. => O(n^2)  S.C. => O(1)
        // int n = nums.size();

        // for(int i = 0; i < n; i++) 
        // {
        //     for(int j = i+1; j < n; j++) 
        //     {
        //         if(nums[i] == nums[j])
        //         return true;
        //     }
        // }
        // return false;

        //efficient
        // T.C. => O(NlogN) S.C. => O(1)
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n - 1; i++) {
            if(nums[i] == nums[i+1]) return true;
        }
        return false;

        //T.C. =>O(N)  S.C => O(N)
        // unordered_map<int,int>m;
        // for(auto a: nums) m[a]++;
        // for(auto a: m)
        // {
        //     if(a.second > 1)return 1;
        // }
        // return 0;

        //T.C. => O(N) S.C => O(N)
        // unordered_set<int>s;
        // for(auto a:nums)s.insert(a);
        // if(nums.size() == s.size()) return false;
        // return true;
    }
};
