class Solution {
public:
int largestRectangleArea(vector < int > & heightofHistogram) {
    stack < int > st;
    int maxA = 0;
    int n = heightofHistogram.size();
    for (int i = 0; i <= n; i++) {
        while (!st.empty() && (i == n || heightofHistogram[st.top()] >= heightofHistogram[i])) {
            int height = heightofHistogram[st.top()];
            st.pop();
            int width;
            if (st.empty())
                width = i;
            else
                width = i - st.top() - 1;
            maxA = max(maxA, width * height);
        }
        st.push(i);
    }
    return maxA;
}
    int maximalRectangle(vector<vector<char>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    int maxArea = 0;
    vector<int>heightofHistogram(m, 0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == '1') 
            heightofHistogram[j]++;
            else 
            heightofHistogram[j] = 0;
        }
        int area = largestRectangleArea(heightofHistogram);
        maxArea = max(area, maxArea);
    }    
    return maxArea;
    }
};
