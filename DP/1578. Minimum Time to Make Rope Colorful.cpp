class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
    char previousColor = 'A';
    int previousTime = 0;
    int currentCost, previousCost;
    currentCost = previousCost = 0;
    for(int i = 1; i <= colors.size(); i++) {
        if(colors[i - 1] == previousColor) {
            currentCost = previousCost + min(neededTime[i - 1], previousTime);
            previousTime = max(neededTime[i - 1], previousTime);
        }else {
            currentCost = previousCost;
            previousColor = colors[i - 1];
            previousTime = neededTime[i - 1];
        }
        previousCost = currentCost;
    }    
    return previousCost;
    }
};
