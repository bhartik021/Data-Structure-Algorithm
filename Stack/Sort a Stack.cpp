#include <bits/stdc++.h>

void insertInDescendingOrder(std::stack<int>& stack, int element) {
    if (stack.empty() || element > stack.top()) {
        stack.push(element);
        return;
    }

    int topElement = stack.top();
    stack.pop();
    insertInDescendingOrder(stack, element);
    stack.push(topElement);
}

void sortStack(stack<int> &stack)
{
	// Write your code here
	if (!stack.empty()) {
        int topElement = stack.top();
        stack.pop();
        sortStack(stack);
        insertInDescendingOrder(stack, topElement);
    }
}
