#include<bits/stdc++.h>
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

Node *reverseLinkedListRec(Node *head)
{
    //Write your code here
	if(head ==  NULL || head->next == NULL) {
		return head;
	}

	Node* smallAns = reverseLinkedListRec(head->next);
	Node* temp = smallAns;

	while(temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = head;
	head->next = NULL;
	return smallAns;
}
