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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2){
       
        ListNode *l1=list1, *l2=list2, *pt=list1,*pt2=list1;
        a-=1;
        b+=1;
        while (a--)
        {
            l1=l1->next;
        }
        
        // l1=list1;
        while (b--)
        {
            pt=pt->next;
        }
        while (l2->next)
        {
            
            l2=l2->next;
        }
        
        l1->next=list2;
        l2->next=pt;
        
        return list1;
//         int flag=0;
//         while(l1 && l1->next!=NULL)
//         {
//             a--;
//             b--;
//             cout<<l1->val<<" ";
//             if(a==0) 
//             {
//                 ListNode *temp=l1->next;
//                 l1->next=l2;
//                 l1=temp;
//                 flag=1;
//             }
//             if(b==0)
//             {
//                 pt=l1->next->next;
//             }
            
//             if(a!=0) l1=l1->next;
            
//         }
//         ListNode *y=list1;
//         // && y->next!=NULL
//         while(y && y->next!=NULL)
//         {
//             cout<<y->val<<" ";
//             if(y->next!=NULL)
//             {
//                 pt2=y->next;
                
//             }
//             y=y->next;
//         }
//         pt2->next=pt;
//         return list1;
    }
};