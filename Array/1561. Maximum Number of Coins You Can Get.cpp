class Solution {
public:
    int maxCoins(vector<int>& piles) {
    int n = piles.size();
		sort(piles.begin(), piles.end());
		int start = n - 2;
		int end = n / 3;
		int myCoins = 0;
		while(start >= end) {
			myCoins += piles[start];
			start = start - 2;
		}
		return myCoins;  
    }
};
