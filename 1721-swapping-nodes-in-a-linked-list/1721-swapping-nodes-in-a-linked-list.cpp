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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp1=head;
        ListNode* temp2=head;
        ListNode* temp3=head;
        int k1=k;
        int k2=k-1;
        while(temp1!=NULL)
        {
            if(k1<=0)
            {
                temp2=temp2->next;
            }
            temp1=temp1->next;
            k1--;
        }
        
        while(k2--)
        {
            temp3=temp3->next;
        }
        int x=temp3->val;
        temp3->val=temp2->val;
        temp2->val=x;
        cout<<temp3->val<<" "<<temp2->val<<endl;
        return head;
        
        
        
    }
};