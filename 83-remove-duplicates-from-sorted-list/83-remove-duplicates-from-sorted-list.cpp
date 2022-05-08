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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)    return head ;
        if(head->next==NULL)    return head ;
        ListNode *curr=head, *nex=head->next;
        while(nex /* && nex->next!=NULL*/)
        {
            if(curr->val == nex->val)
            {
                curr->next=nex->next;
                nex=nex->next;
                // Node temp 
            }
            else
            {
                curr=curr->next;
                nex=nex->next;
            }
            // curr=curr->next;
            // nex=nex->next;
        }
        return head;
        
    }
};