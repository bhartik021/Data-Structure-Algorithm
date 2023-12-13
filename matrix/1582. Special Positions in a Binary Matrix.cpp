class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
    int special = 0;

        for (const auto& row : mat) {
            if (accumulate(row.begin(), row.end(), 0) == 1) {
                int colIdx = distance(row.begin(), find(row.begin(), row.end(), 1));
                special += getColumnSum(mat, colIdx) == 1;
            }
        }

        return special;     
    }

    private:
    int getColumnSum(const vector<vector<int>>& mat, int colIdx) {
        int sum = 0;
        for (const auto& row : mat) {
            sum += row[colIdx];
        }
        return sum;
    }
};
