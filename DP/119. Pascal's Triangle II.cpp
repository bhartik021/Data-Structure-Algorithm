class Solution {
public:
    vector<int> getRow(int rowIndex) {
      std::vector<int> currentRow, previousRow;

        for (int i = 0; i <= rowIndex; i++) {
            currentRow.clear();
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    currentRow.push_back(1);  // The first and last elements are always 1.
                } else {
                    int sum = previousRow[j - 1] + previousRow[j];
                    currentRow.push_back(sum);
                }
            }

            previousRow = currentRow;
        }

        return currentRow;
    }
};
