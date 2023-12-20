class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
    sort(prices.begin(), prices.end());
    return (money >= (prices[0] + prices[1])) ? money - (prices[0] + prices[1]) : money;    
    }
};
