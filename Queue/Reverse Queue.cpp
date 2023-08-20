#include<queue>
void reverseQueue(queue<int> &input) {
	// Write your code here
	
	if(input.size() <= 1) {
		return;
	}

	int front = input.front();
	input.pop();

	reverseQueue(input);

	input.push(front);
}
