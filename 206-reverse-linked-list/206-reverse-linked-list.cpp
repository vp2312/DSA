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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        // ListNode *ans=reverseList(head->next);
        // // ListNode *cur= head->next;
        // head->next->next=head;
        // head->next=NULL;
        // return ans;
        
        
        ListNode *curr=head;
        ListNode *dummy= new ListNode(-1);
        ListNode *prev=dummy, *temp;
        
        while(curr)
        {
            temp=curr->next;
            curr->next=prev->next;
            prev->next=curr;
            curr=temp;
        }
        
        return prev->next;
        
    }
};