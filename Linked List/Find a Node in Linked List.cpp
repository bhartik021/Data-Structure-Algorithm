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

int findNode(Node *head, int n){
    // Write your code here
    int pos = 0;
    while(head != NULL) {
        if(head->data == n) {
            return pos;
        }
        pos++;
        head = head->next;
    }
    return -1;
}
