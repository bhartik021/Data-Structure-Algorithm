class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int num_rows = matrix.size();
    int num_cols = matrix[0].size();

    vector<vector<int>>ans;

    for (int j = 0; j < num_cols; j++) {

        vector<int>temp;

        for (int i = 0; i < num_rows; i++) {

            temp.push_back(matrix[i][j]);

        }

    ans.push_back(temp);

    }

    return ans;    
    }
};
