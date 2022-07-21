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
    int maxPathSum(TreeNode* root) {
        int res=INT_MIN;
        solve(root, res);
        return res;    
    }
    
    int solve(TreeNode* root, int &ans)
    {
        if(!root)   return 0;
        
        int l= solve(root->left, ans);
        int r= solve(root->right, ans);
        
        int temp= max(max(l,r)+root->val, root->val);
        int temp2= max(temp,  l+r+root->val);
        ans= max(ans, temp2);
        return temp;
        
    }
    
};