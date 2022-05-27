// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* h1, Node* h2)
{
    Node *c1=h1;
    Node *c2=h2;
    Node *dummy=new Node(-1);
    Node *prev=dummy;
    
    while(c1!=NULL && c2!=NULL)
    {
        if(c1->data < c2->data)
        {
            c1=c1->next;
        }
        else if(c1->data > c2->data)
        {
            c2=c2->next;
        }
        else
        {
            Node *temp= new Node(c1->data);
            prev->next=temp;
            prev=prev->next;
            // c1=c1->next;
            // c2=c2->next;
            while(c1 && c1->data==prev->data)   c1=c1->next;
            while(c2 && c2->data==prev->data)   c2=c2->next;
        }
        
    }
    return dummy->next;
    // Your Code Here
}