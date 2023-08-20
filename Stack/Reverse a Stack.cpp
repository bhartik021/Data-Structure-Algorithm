void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here
    if(input.size() <= 1) {
        return;
    }

    int lastElement = input.top();
    input.pop();

    reverseStack(input, extra);

    while(!input.empty()) {
        int top = input.top();
        input.pop();
        extra.push(top);
    }

    input.push(lastElement);

    while(!extra.empty()) {
        int top = extra.top();
        extra.pop();
        input.push(top);
    }
}
