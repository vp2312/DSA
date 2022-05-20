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
    
    
     ListNode* middleNode(ListNode* head) {
        ListNode *slow=head, *fast=head;
        while(fast && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
        
    }
    
    
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode *ans=reverseList(head->next);
        // ListNode *cur= head->next;
        head->next->next=head;
        head->next=NULL;
        return ans;
    }
    
    
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL)  return ;
        
        ListNode* mid= middleNode(head);
        
        
        ListNode* nhead=mid->next;
        mid->next=NULL;
        nhead= reverseList(nhead);
        
        ListNode *c1= head;
        ListNode *c2= nhead;
        ListNode *frw1=NULL;
        ListNode *frw2=NULL;
        
        while(c2)
        {
            frw1=c1->next;
            frw2=c2->next;
            
            c1->next=c2;
            c2->next=frw1;
            
            c1=frw1;
            c2=frw2;
            
        }       
        return ;
    }
};