class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    if(arr[0] > k) return k;
     int current = k;
        for(int a:arr) {
            if(a <= current){
                current++;
            }else {
                break;
            }
        }
        return current;
    }
};

