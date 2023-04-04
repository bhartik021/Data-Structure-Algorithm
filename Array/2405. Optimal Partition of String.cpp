class Solution {
public:
    int partitionString(string s) {
      int ans = 1;
        set<char>st;
        for(auto c : s) {
            if(st.find(c) != st.end()) {
                st.clear();
                ans++;
            }
            st.insert(c);
        }
        return ans;
    }
};
