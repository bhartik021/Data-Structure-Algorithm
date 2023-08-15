#include<bits/stdc++.h>
bool isBalanced(string expression) 
{
    // Write your code here
    stack<char>st;
    int n = expression.size();

    if(n == 0) {
        return false;
    }

    for(int i = 0; i < n; i++) {
        if(expression[i] == '(' || expression[i] == '{' || expression[i] == '[') {
            st.push(expression[i]);
        }

        if(expression[i] == ')') {
            if(!st.empty() && st.top() == '(') {
                st.pop();
            } else {
                return false;
            }
        }

        if (expression[i] == '}') {
            if(!st.empty() && st.top() == '{') {
                st.pop();
            }
            else {
                return false;
            }
        }
        
        if(expression[i] == ']') {
            if(!st.empty() && st.top() == '[') {
                st.pop();
            }
            else {
                return false;
            }
        }
     }

        if(!st.empty()) {
            return false;
        }
        else {
            return true;
        }
}
