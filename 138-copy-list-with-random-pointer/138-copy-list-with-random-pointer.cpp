/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *curr=head;
        while(curr)
        {
            Node *temp=curr->next;
            curr->next= new Node(curr->val);
            // nn->random=curr->random->next;
            curr->next->next=temp;
            curr=curr->next->next;
        }
        curr=head;
        Node *ans;
        if(curr && curr->next!=NULL) ans=head->next;
        while(curr && curr->next!=NULL)
        {
            curr->next->random= (curr->random !=NULL)? curr->random->next: NULL;
            curr=curr->next->next;
        }
        curr=head;
        
        while(curr && curr->next!=NULL)
        {
            Node *ori= curr->next;
            curr->next=ori->next;
            ori->next= (ori->next !=NULL)? ori->next->next :NULL;
            curr=curr->next;
        }
        
        return ans;
    }
};