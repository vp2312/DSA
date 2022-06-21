/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        
        if((p==NULL && q==NULL))    return true;
        if((p==NULL || q==NULL))    return false;
        
        bool l=isSameTree(p->left,q->right);
        bool r=isSameTree(p->right,q->left);
        if((p->val==q->val) && l && r)  return true;
        return false;
        
    }
    
    bool isSymmetric(TreeNode* root) {
        
        return isSameTree(root->left,root->right);
        
    }
};