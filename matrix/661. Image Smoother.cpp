class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
     int rows = img.size();
        int cols = img[0].size();
        std::vector<std::vector<int>> result(rows, std::vector<int>(cols, 0));

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                int total_sum = 0;
                int count = 0;

                for (int x = std::max(0, i-1); x < std::min(rows, i+2); ++x) {
                    for (int y = std::max(0, j-1); y < std::min(cols, j+2); ++y) {
                        total_sum += img[x][y];
                        count += 1;
                    }
                }

                result[i][j] = total_sum / count;
            }
        }

        return result;   
    }
};
