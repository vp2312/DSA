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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if((p==NULL && q!=NULL) || (p!=NULL && q==NULL))  return false;
        if((p==NULL && q==NULL))    return true;
//          if((p->val==q->val))
//          {
//              bool l=isSameTree(p->left,q->left);
//             bool r=isSameTree(p->right,q->right);
//             if(l && r)  return true;
             
//          }
        bool l=isSameTree(p->left,q->right);
        bool r=isSameTree(p->right,q->left);
        if((p->val==q->val) && l && r)  return true;
        return false;
        
    }
    bool isSymmetric(TreeNode* root) {
        
        return isSameTree(root->left,root->right);
        
//          if((root->left==NULL && root->right!=NULL) || (root->left!=NULL && root->right==NULL))  return false;
//         if((root->left==NULL && root->right==NULL))    return true;
//         if((root->left->val==root->right->val)) return true;
//         else return false;
// //          if((p->val==q->val))
// //          {
// //              bool l=isSameTree(p->left,q->left);
// //             bool r=isSameTree(p->right,q->right);
// //             if(l && r)  return true;
             
// //          }
//         bool l=isSymmetric(root->left);
//         bool r=isSymmetric(root->right);
//         if(/*(root->left->val==root->right->val) &&*/ l && r)  return true;
//         return false;
        
    }
};