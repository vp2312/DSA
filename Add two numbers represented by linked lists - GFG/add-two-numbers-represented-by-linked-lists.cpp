// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
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
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
     struct Node* reverse(struct Node *head)
    {
        if(head==NULL || head->next==NULL)  return head;
        struct Node *curr=head, *prev=NULL,*temp;
        
        while(curr)
        {
            temp=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=temp;  
        }
        return prev;
        
    }
    int length(struct Node *head)
    {
        struct Node *curr=head;
        int cnt=0;
        while(curr)
        {
            curr=curr->next;
            cnt++;
        }
        
        return cnt;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* l1, struct Node* l2)
    {
        // ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int len1=length(l1);
        int len2=length(l2);
        // cout<<len1<<" "<<len2;
        struct Node *newl1= reverse(l1);
        struct Node *newl2= reverse(l2);
        
        struct Node *curr1= newl1;
        struct Node *curr2= newl2;
        
        if(len1>=len2)
        {
            // cout<<"++";
            int val2=0,val1,carry=0;
            while(curr1)
            {
                if(curr2)    val2=curr2->data;
                int sum= val2+ curr1->data+carry;
                if(sum>9)
                {
                    curr1->data= sum%10;
                    carry=1;
                }
                else
                {
                    curr1->data= sum;
                    carry=0;
                }
                
                if(curr1->next==NULL && carry==1) 
                {
                    struct Node *dummy= new Node(0);
                    curr1->next=dummy;
                }
                val2=0;
                if(curr2) curr2=curr2->next;
                curr1=curr1->next;
                
                
            }
            return reverse(newl1);
        }
        else
        {
            // cout<<"--";
            int val2,val1=0,carry=0;
            while(curr2)
            {
                if(curr1)    val1=curr1->data;
                int sum= val1+ curr2->data+carry;
                if(sum>9)
                {
                    curr2->data= sum%10;
                    carry=1;
                }
                else
                {
                    curr2->data= sum;
                    carry=0;
                }
                
                
                if(curr2->next==NULL && carry==1) 
                {
                    struct Node *dummy= new Node(0);
                    curr2->next=dummy;
                }
                
                val1=0;
                if(curr1) curr1=curr1->next;
                curr2=curr2->next;
                
            }
            
            return reverse(newl2);
        }
        return l1;
        // code here
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends