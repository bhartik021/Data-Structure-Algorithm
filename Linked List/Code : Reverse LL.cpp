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
	vector<int>data;
	for(Node* current = head; current != NULL; current = current->next) {
		data.push_back(current->data);
	}
	for(Node* current = head; current != NULL; current = current->next) {
		current->data = data.back();
		data.pop_back();
	}
	return head;
}
