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
//         if(!root)   
            
//         if(original->data== target->data)   return target;
        TreeNode* ans;
        
        preorder(original,cloned,ans, target);
        return ans;
        
        
    }
    void preorder(TreeNode* ori, TreeNode* dup ,TreeNode* & ans , TreeNode* target)
    {
        if(!ori && !dup)    return ;
        
        if(target->val==dup->val){
            ans=dup;
            return ;
        }    
        
        preorder(ori->left,dup->left, ans,target);
        preorder(ori->right,dup->right, ans,target);

        return;
    }
};