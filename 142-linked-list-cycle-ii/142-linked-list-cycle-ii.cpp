/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         ListNode *slow=head;
        ListNode *fast=head;
        int flag=0;
        while(fast && fast->next!=NULL)
        {
            
            // curr=curr->next;
            slow=slow->next;
            fast=fast->next->next;
            if(slow == fast)
            {
                flag=1;
                break;
            }
        }
        
        if(flag!=1) return NULL;  
        
        ListNode *meet=slow;
        ListNode *curr=head;
        while(curr!=meet)
        {
            curr=curr->next;
            meet=meet->next;
        }
        return curr;
        
    }
};