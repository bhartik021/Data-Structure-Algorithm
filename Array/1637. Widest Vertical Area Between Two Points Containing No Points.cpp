class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
    vector<int> xSorted;
        for (const auto& point : points) {
            xSorted.push_back(point[0]);
        }

        sort(xSorted.begin(), xSorted.end());

        int maxWidth = 0;
        for (int i = 0; i < xSorted.size() - 1; i++) {
            maxWidth = max(maxWidth, xSorted[i + 1] - xSorted[i]);
        }

        return maxWidth;      
    }
};
