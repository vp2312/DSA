// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
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

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

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

class Solution
{
    public:
    struct Node* reverseList(struct Node *head)
    {
        Node *prev=NULL, *curr=head , *temp ;
        while(curr)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        Node *newhead=reverseList(head);
        
        Node *curr=newhead,*start=head;
        while(curr/*curr->next!=NULL*/)
        {
            // if(curr==newhead)
            // {
                if(curr->data <9)
                {
                    curr->data=curr->data +1;
                    Node *hed=reverseList(newhead);
                    return hed;
                    // return head;
                }
                else
                {
                    while(curr->next && curr->data== 9)
                    {
                        curr->data=0;
                        curr=curr->next;
                    }
                    // curr->data=0;
                    curr->data=curr->data +1;
                    Node *hed=reverseList(newhead);
                    return hed;
                    
                }
            }
            
        // }
        // if(curr->data <9)
        // {
        //     curr->data=curr->data +1;
        //     return head;
        // }
        // else
        // {
        //     while(start)
        //     {
        //         if(start->data !=9)
        //         {
        //             start->data=start->data +1;
        //         }
        //         else
        //         {
        //             start->data=0;
        //         }
        //         start=start->next;
        //     }
        // }
        return head;
        
        
        
        // Your Code here
        // return head of list after adding one
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends