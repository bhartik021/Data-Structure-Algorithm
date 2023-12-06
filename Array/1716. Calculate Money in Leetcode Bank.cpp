class Solution {
public:
    int totalMoney(int n) {
     int w = n / 7;
        int money = w * 28;
        money += (7 * w * (w - 1)) / 2;

        if (n % 7) {
            int extra_days = n % 7;
            int money_to_add = w + 1;
            for (int i = 0; i < extra_days; ++i) {
                money += money_to_add;
                money_to_add += 1;
            }
        }
        return money;
    }
};
