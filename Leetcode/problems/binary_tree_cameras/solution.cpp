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
    int ans;
    set<TreeNode*>covered;
    int minCameraCover(TreeNode* root) {
         ans=0;
        covered.insert(NULL);dfs(root,NULL);
        return ans;
        
    }
    void dfs(TreeNode* node, TreeNode* par)
    {
        if(node!=NULL)
        {
            dfs(node->left,node);
            dfs(node->right,node);
            if(par==NULL && !covered.count(node)||!covered.count(node->left)||!covered.count(node->right))
            {
                ans++;
                covered.insert(node);
                covered.insert(par);
                covered.insert(node->left);
                covered.insert(node->right);
            }
        }
    }
};