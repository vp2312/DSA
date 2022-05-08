// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


 // } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        if(head==NULL)  return NULL;
        
        node *prev=NULL,*nex=NULL,*curr=head;
        int cnt=0;
        while(curr!=NULL && cnt<k)
        {
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
            cnt++;
        }
        
        if(nex!=NULL)
        {
            head->next=reverse(curr,k);
        }
        
        return prev;
        
        
        
        
        // int cnt=0;
        // node *prev=NULL, *curr=head , *temp , *newhead, *prevsetend,*nextsethead=NULL;
        // int flag=0;
        // node *currsetend=NULL;
        
        // while(curr )
        // {
        //         cout<<curr->data<<endl;
        //         if(cnt==0 /*&& flag==0*/)
        //         {
        //             if(flag==0)
        //             {
        //                 prevsetend=curr;
        //             }
        //             else    currsetend=curr;
        //             cout<<prevsetend->data<<endl;
        //         }
        //         temp=curr->next;
        //         curr->next=prev;
        //         prev=curr;
        //         curr=temp;
        //         cnt++;
            
        //     if(cnt==k)
        //     {
        //         if(flag==0)
        //         {
        //             newhead=prev;
        //             flag=1;
        //         }
        //         // prevsetend->next=prev;
        //         prev=NULL;
        //         prevsetend->next=nextsethead;
        //         cout<<curr/*prevsetend->next->data*/<<endl;
        //         cnt=0;
                
        //     }
            
            
        // }
        // cout<<endl;
        // cout<<prevsetend->data<<endl;
        // // return prev;
        // return newhead;
        // Complete this method
    }
};


// { Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}

  // } Driver Code Ends