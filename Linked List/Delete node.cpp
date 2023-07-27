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

Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
	if(head == NULL) {
		return head;
	}
	if(pos == 0) {
		return head->next;
	}
	Node* curr = head;
	int currPos = 0;

	while(curr != NULL && currPos < pos - 1) {
		++currPos;
		curr = curr->next;
	}

	if(curr == NULL || curr -> next == NULL) {
		return head;
	}

	curr->next = curr->next->next;

	return head;
}
