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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>qp;
        qp.push(root);
        
        while(!qp.empty())
        {
            int size=qp.size();
            vector<int>vp;
            for(int i=0;i<size;i++)
            {
               
                TreeNode* node=qp.front();
                qp.pop();
                if(node->left)
                {
                    qp.push(node->left);
                }
                if(node->right)
                {
                    qp.push(node->right);
                }
                vp.push_back(node->val);
                
            }
            ans.push_back(vp);
        }
        return ans;
        
        
    }
};