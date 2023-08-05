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

Node *reverseLinkedList(Node *head) {
    // Write your code here
	Node* prev = NULL;
	Node* current = head;

	while(current != NULL) {
		Node* next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	return prev;
}
