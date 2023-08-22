class Solution {
public:
    string convertToTitle(int columnNumber) {
      string result = "";
        while(columnNumber) {
            char c = 'A' + (columnNumber - 1) % 26;
            result = c + result;
            columnNumber = (columnNumber - 1) / 26;
        }
        return result;
    }
};
