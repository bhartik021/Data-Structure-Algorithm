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

Node *midPoint(Node *head)
{
    // Write your code here
	if(head == NULL || head->next == NULL) {
		return head;
	}
	Node* slow = head;
	Node* fast = head->next;

			while(fast != NULL && fast->next != NULL) {
				fast = fast->next->next;
				slow = slow->next;
			}
			return slow;
	
}
