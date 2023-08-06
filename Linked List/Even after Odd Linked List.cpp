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

Node *evenAfterOdd(Node *head)
{
	//write your code here
	if(head == NULL) {
		return head;
	}
	Node *evenHead = NULL, *oddHead = NULL, *evenTail = NULL, *oddTail = NULL;

	while(head != NULL) {
		if(head->data % 2 == 0) {
			if(evenHead == NULL) {
				evenHead = head;
				evenTail = head;
			}
			else {
				evenTail->next = head;
				evenTail = evenTail->next;
			}
		}
		else {
			if(oddHead == NULL) {
				oddHead = head;
				oddTail = head;
			}
			else {
				oddTail->next = head;
				oddTail = oddTail->next;
			}
		}
		head = head->next;
	}
	if(oddHead == NULL) {
		return evenHead;
	}
	else {
		oddTail->next = evenHead;
	}
	if(evenHead != NULL) {
		evenTail->next = NULL;
	}
	return oddHead;
}
