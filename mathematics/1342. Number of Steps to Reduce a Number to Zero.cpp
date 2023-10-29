class Solution {
    public:
    int numberOfSteps(int num) {
    if(num <= 1) return num;
    int counter = 0;
    while(num > 0) {
        if(num % 2 == 0) {
            num /= 2;
        } else {
            num -= 1;
        }
        counter++;
    }
    return counter;
    }
};
