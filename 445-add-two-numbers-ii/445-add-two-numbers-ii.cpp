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
    ListNode* reverse(ListNode *head)
    {
        if(head==NULL || head->next==NULL)  return head;
        ListNode *curr=head, *prev=NULL,*temp;
        
        while(curr)
        {
            temp=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=temp;  
        }
        return prev;
        
    }
    int length(ListNode *head)
    {
        ListNode *curr=head;
        int cnt=0;
        while(curr)
        {
            curr=curr->next;
            cnt++;
        }
        
        return cnt;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int len1=length(l1);
        int len2=length(l2);
        cout<<len1<<" "<<len2;
        ListNode *newl1= reverse(l1);
        ListNode *newl2= reverse(l2);
        
        ListNode *curr1= newl1;
        ListNode *curr2= newl2;
        
        if(len1>=len2)
        {
            cout<<"++";
            int val2=0,val1,carry=0;
            while(curr1)
            {
                if(curr2)    val2=curr2->val;
                int sum= val2+ curr1->val+carry;
                if(sum>9)
                {
                    curr1->val= sum%10;
                    carry=1;
                }
                else
                {
                    curr1->val= sum;
                    carry=0;
                }
                
                if(curr1->next==NULL && carry==1) 
                {
                    ListNode *dummy= new ListNode(0);
                    curr1->next=dummy;
                }
                val2=0;
                if(curr2) curr2=curr2->next;
                curr1=curr1->next;
                
                
            }
            return reverse(newl1);
        }
        else
        {
            cout<<"--";
            int val2,val1=0,carry=0;
            while(curr2)
            {
                if(curr1)    val1=curr1->val;
                int sum= val1+ curr2->val+carry;
                if(sum>9)
                {
                    curr2->val= sum%10;
                    carry=1;
                }
                else
                {
                    curr2->val= sum;
                    carry=0;
                }
                
                
                if(curr2->next==NULL && carry==1) 
                {
                    ListNode *dummy= new ListNode(0);
                    curr2->next=dummy;
                }
                
                val1=0;
                if(curr1) curr1=curr1->next;
                curr2=curr2->next;
                
            }
            
            return reverse(newl2);
        }
        return l1;
//         while( curr1!=NULL && curr2!=NULL)
//         {
            
//         }
        
        
    }
};