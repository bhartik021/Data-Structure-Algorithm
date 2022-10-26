class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        int mx = arr[n-1];
        ans.push_back(-1);
        for(int i=n-2;i>=0;i--){
          ans.push_back(mx);
            if(arr[i]>=mx){
               
                mx = arr[i];
            } 
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
