/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans;
        preorder(cloned,ans, target);
        return ans;
    }
    void preorder(TreeNode* dup ,TreeNode* & ans , TreeNode* target)
    {
        if(!dup)    return ;
        
        if(target->val==dup->val){
            ans=dup;
            return ;
        }    
        preorder(dup->left, ans,target);
        preorder(dup->right, ans,target);

        return;
    }
};