class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
    // int m = grid.size();
    // int n = grid[0].size();
    // int count = 0;
    //     for(int i = 0; i < m; i++){
    //         for(int j = 0; j < n; j++){
    //             if(grid[i][j] < 0)
    //                 count++;
    //         }
    //     }
    //     return count;
        
    // Using binary search
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
       
        for(int i = 0; i < m; i++) {
            int left = 0;
            int right = n - 1;
            
            while(left <= right) {
                int mid = (left + right) / 2;
                if(grid[i][mid] < 0){
                    right = mid - 1;
                }else {
                    left = mid + 1;
                }
            }
            // The count of negative numbers in the row is (n - left)
            count += (n - left);
        }
        return count;
    }
};
