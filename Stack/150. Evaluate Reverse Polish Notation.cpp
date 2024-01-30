class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int>st;
    for(auto x : tokens) {
        if(x == "+" || x == "-" || x == "*" || x == "/") {
            int operand2 = st.top(); 
            st.pop();
            int operand1 = st.top();
            st.pop();

            if(x == "+") {
                st.push(operand1 + operand2); 
            }

            if(x == "-") {
                st.push(operand1 - operand2); 
            }

            if(x == "*") {
                st.push(operand1 * operand2); 
            }

            if(x == "/") {
                st.push(operand1 / operand2); 
            }
        }
        else {
            stringstream ss(x);
            int data;
            ss >> data;
            st.push(data);
        }
    }   
    return st.top(); 
    }
};
