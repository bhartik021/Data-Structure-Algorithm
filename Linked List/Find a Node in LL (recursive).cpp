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

int findNodeRec(Node *head, int n)
{
	//Write your code here
	if(head == NULL) {
		return -1;
	}
	else if(head->data == n) {
		return 0;
	}
	int smallAns = findNodeRec(head->next, n);

	if(smallAns == -1) {
		return -1;
	}
	return smallAns + 1;
}
