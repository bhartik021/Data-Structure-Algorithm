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

Node *removeDuplicates(Node *head)
{
    //Write your code here
	Node* current = head;
	while(current != NULL && current->next != NULL) {
		if(current->data == current->next->data) {
			current->next = current->next->next;
		}else 
		current = current->next;
	}
	return head;
}
