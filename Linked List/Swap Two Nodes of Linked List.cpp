/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *swapNodes(Node *head, int i, int j)
{
	//Write your code here
	if(i == j) {
		return head;
	}
	Node *currentNode = head, *prev = NULL;
	Node* firstNode = NULL, *secondNode = NULL, *firstNodePrev = NULL, *secondNodePrev = NULL;
	int pos = 0;
	while(currentNode != NULL) {
		if(pos == i) {
			firstNodePrev = prev;
			firstNode = currentNode;
		} else if(pos == j) {
			secondNodePrev = prev;
			secondNode = currentNode;
		}
		prev = currentNode;
		currentNode = currentNode->next;
		pos++;
	}
	if(firstNodePrev != NULL) {
		firstNodePrev->next = secondNode;
	}else {
		head = secondNode;
	}
	if(secondNodePrev != NULL) {
		secondNodePrev->next = firstNode;
	}
	else {
		head = firstNode;
	}
	Node *currentFirstNode = secondNode->next;
	secondNode->next = firstNode->next;
	firstNode->next = currentFirstNode;

	return head;
}
