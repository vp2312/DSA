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
    void flatten(TreeNode* root) {
        
        if(root==NULL)  return ;
        flatten(root->right);
        flatten(root->left);
        
        if(root->left)  
        {
            TreeNode* right=root->right;
            root->right=root->left;
            root->left=NULL;
            while(root->right)  root=root->right;
            root->right=right;
        }
        
        
//         if(root->left == NULL) return;
        
//         TreeNode* right;
//         if(root->right!=NULL)   right= root->right;
//         // if(root->left==NULL)    root->right=right;
//         if(root->left!=NULL) root->right=root->left;
//         flatten(root->right);
//         root->right=right;
//         return ;
        
//         stack<TreeNode*> s;
//         if(root->right != NULL) s.push(root->right);
//         while(!s.empty())
//         {
            
//         }
        
        
    }
};