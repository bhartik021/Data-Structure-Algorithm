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

int length(Node *head)
{
	// Write your code here
	if(head == NULL) {
		return 0;
	}
	Node *temp = head;
	int size = 1 + length(temp->next);
	return size;
}

Node *bubbleSort(Node *head) {
	for(int i = 0; length(head) > i; i++) {
		Node *prev = NULL, *curr = head;
		while(curr->next != NULL) {
			if(curr->data > curr->next->data) {
				if(prev != NULL) {
					Node *temp = curr->next->next;
					curr->next->next = curr;
					prev->next = curr->next;
					curr->next = temp;
					prev = prev->next;
				}
				else {
					head = curr->next;
					curr->next = head->next;
					head->next = curr;
					prev = head;
				}
			}
			else {
				prev = curr;
				curr = curr->next;
			}
		}
	}
	return head;
}
