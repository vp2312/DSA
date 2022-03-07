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
    TreeNode* createBinaryTree(vector<vector<int>>& desc) {
        unordered_map<int,TreeNode*> nodes;
        unordered_map<int,int> par,child;
        for(int i=0;i<desc.size();i++)
        {
            if(nodes.find(desc[i][0])==nodes.end())
            {
                TreeNode* nd= new TreeNode(desc[i][0]) ;
                nodes[desc[i][0]] = nd;
            }
            if(nodes.find(desc[i][1])==nodes.end())
            {
                TreeNode* nd= new TreeNode(desc[i][1]) ;
                nodes[desc[i][1]] = nd;
            }
            if(desc[i][2]==0)
            {
                nodes[desc[i][0]]->right= nodes[desc[i][1]];
            }
            else
            {
                nodes[desc[i][0]]->left= nodes[desc[i][1]];
            }
            
            par[desc[i][0]]++;
            child[desc[i][1]]++;
        }
        
        for(auto &j: nodes)
        {
            if(child.find(j.first)==child.end() /*&& par.find(j.first)!=par.end()*/  )
            {
                return j.second;
            }
        }
        TreeNode* ans;
        return ans;
    }
};