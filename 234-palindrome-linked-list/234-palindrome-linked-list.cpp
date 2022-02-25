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
    ListNode* findmid(ListNode* head)
    {
        ListNode *slow=head ,*fast=head;
        while(fast && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    
    ListNode* reverse(ListNode *head)
    {
        if(head==NULL || head->next== NULL)
        {
            return head;
        }
        
        ListNode *ans= reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return ans;
        // ListNode* slow=head ,fast=head;
        // while(fast)
        // {
        //     fast=fast->head->head;
        //     slow=slow->head;
        // }
        // return slow;
    }
    
    bool isPalindrome(ListNode *head) {
        if(head== NULL)
        {
            return true;
        }
        ListNode *curr=head;
        ListNode *mid= findmid(head);
        ListNode *last= reverse(mid);
        while(last)
        {
            if(curr->val != last->val)
            {
                return false;
            }
            curr=curr->next;
            last=last->next;
        }
        return true;
    }
};