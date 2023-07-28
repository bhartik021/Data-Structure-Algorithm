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
Node* InsertNode(Node *head, int pos, Node* newNode)
{
    if(head == NULL) {
		return newNode;
	}
	if(pos == 0) {
		newNode->next = head;
		return newNode;
	}
	Node *smallHead = InsertNode(head->next, pos - 1, newNode);
	head->next = smallHead;
	return head;
}
