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
    TreeNode head;
    TreeNode* invertTree(TreeNode* root) {
        if(!root)   return root;
        
        TreeNode* lst=invertTree(root->left);
        TreeNode* rst=invertTree(root->right);
        root->left=rst;
        root->right=lst;
        return root;
    }
};