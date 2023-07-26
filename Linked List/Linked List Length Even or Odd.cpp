//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

// Function to check the length of linklist
int isLengthEvenOrOdd(struct Node* head);

// Driver function
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,tmp,first, i ,l;
        struct Node* head = NULL, *tail = NULL;
        cin>>n;
        cin>>first;
        head = new Node(first);
        tail = head;
        for(i=0;i<n-1;i++)
            {
                cin>>l;
                tail->next = new Node(l);
                tail = tail->next;
            }
        if( isLengthEvenOrOdd(head) == 0) cout<<"Even\n";
        else cout<<"Odd\n";
    }
	return 0;
}


// } Driver Code Ends


/*structure of a node of the linked list is as
struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
     //Code here
     int count = 0;
     Node* current = head;
     while(current != NULL) {
         count++;
         current = current -> next;
     }
     if(count % 2 == 0) {
         return 0;
     }else {
         return 1;
     }
     
}
