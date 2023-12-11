class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
    int n = arr.size();
    int quarter = n / 4;
    for(int i = 0; i < n; i++) {
        if(arr[i] == arr[i + quarter]) 
        return arr[i];
    }    
    return -1;
    }
};
