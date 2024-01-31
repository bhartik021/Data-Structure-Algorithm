class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    // vector<int>ans;
    // for(int i = 0; i < temperatures.size(); i++) {
    //     bool flag = false;
    //     for(int j = i + 1; j < temperatures.size(); j++) {
    //         if(temperatures[j] > temperatures[i]) {
    //             ans.push_back(j - i);
    //             flag = true;
    //             break;
    //         }
    //     }
    //     if(!flag)
    //     ans.push_back(0);
    // }    
    // return ans;

    // using stack
    stack<pair<int, int>>st;
    int n = temperatures.size();
    st.push({temperatures[n - 1], n - 1});
    vector<int>ans(n , 0);
    for(int i = n - 2; i >= 0; i--) {
        while(!st.empty() && st.top().first <= temperatures[i]) {
            st.pop();
        }
        if(!st.empty()) {
            ans[i] = st.top().second - i;
        }
        st.push({temperatures[i], i});
    }
    return ans;
    }
};
