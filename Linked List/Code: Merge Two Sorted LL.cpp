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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
	Node* head = new Node(0);

	Node* current = head;

	while(head1 != NULL && head2 != NULL) {
		if(head1->data <= head2->data) {
			current->next = head1;
			head1 = head1->next;
		}else {
			current->next = head2;
			head2 = head2->next;
		}
		current = current->next;
	}

	if(head1 != NULL) {
		current->next = head1;
		head1 = head1->next;
		current = current->next;
	}

	if(head2 != NULL) {
		current->next = head2;
		head2 = head2->next;
		current = current->next;
	}

	return head->next;
}
