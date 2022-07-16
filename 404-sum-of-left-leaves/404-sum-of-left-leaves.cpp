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
    int sumOfLeftLeaves(TreeNode* root) {
        
        int ans=0;
        
        sum(root , ans,0);
        return ans;    
    }
    
    void sum(TreeNode* root , int &ans, int isleft)
    {
        if(!root)
        {
            
            return;
        }
        if(root->left==NULL  && root->right==NULL && isleft==1 )
        {
            ans+= root->val;
        }
        
        sum(root->left,ans, 1);
        sum(root->right,ans, 0);
        
        return ;
            
    }
};