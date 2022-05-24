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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *crsr=head->next->next, *sum=head->next, *prev=head->next;
        while(crsr )
        {
            if(crsr->val != 0)
            {
                sum->val= sum->val +crsr->val;
                crsr= crsr->next;
                sum->next=crsr;
            }
            else
            {
                sum=sum->next;
                crsr=crsr->next;
            }
            
            // if(crsr->next->next ==NULL && crsr->next->val==0 ) 
            // {
            //     crsr->next=NULL;
            //     // crsr=crsr->next;
            //     // break;
            // }
        }
        crsr=head;
        ListNode *x;
        while(crsr->next != NULL )
        {
            x=crsr;
            crsr=crsr->next;
        }
        
        x->next=NULL;    
        return head->next;
        
    }
};