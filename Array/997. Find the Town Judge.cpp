class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
		vector<int> in(N + 1), out(N + 1);
		for (auto a : trust) {
			++out[a[0]];
			++in[a[1]];
		}
		for (int i = 1; i <= N; ++i) {
			if (in[i] == N - 1 && out[i] == 0) return i;
		}
		return -1;
    }
};
