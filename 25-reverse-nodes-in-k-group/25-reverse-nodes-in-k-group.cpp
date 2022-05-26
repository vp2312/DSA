/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int length(ListNode *head)
    {
        int len=0;
        ListNode *curr=head;
        while(curr)
        {
            len++;
            curr=curr->next;
        }
        return len;
    }
    
    ListNode *temphead=NULL;
    ListNode *temptail=NULL;
    ListNode* addfirst(ListNode *node)
    {
        if(temphead==NULL)
        {
            temphead=node;
            temptail=node;
        }
        else
        {
            node->next=temphead;
            temphead=node;
        }
        return temphead;
    }
    
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL || k<1)
            return head;
        ListNode *oh=NULL;
        ListNode *ot=NULL;
        
        int len=length(head);
        ListNode *curr=head;
        while(len>=k)
        {
            int lenk=k;
            while(lenk--)
            {
                ListNode *forw=curr->next;
                curr->next=NULL;
                addfirst(curr);
                curr=forw;
            }
            
            if(oh==NULL)
            {
                oh=temphead;
                ot=temptail;
            }
            else
            {
                ot->next=temphead;
                ot=temptail;
            }
            
            temphead=NULL;
            temptail=NULL;
            len-=k;
        }
        
        ot->next=curr;
        return oh;
        
        
        
        
//         if(head==NULL)  return NULL;
        
//         ListNode *prev=NULL,*nex=NULL,*curr=head;
//         int cnt=0;
//         while(curr!=NULL && cnt<k)
//         {
//             nex=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=nex;
//             cnt++;
//         }
        
//         if(nex!=NULL)
//         {
//             head->next=reverseKGroup(curr,k);
//         }
        
//         return prev;
        
    }
};