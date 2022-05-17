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
        if(cloned==NULL)return cloned;
        queue<TreeNode*>qp;
        qp.push(cloned);
        while(!qp.empty())
        {
            TreeNode* it=qp.front();qp.pop();
            if(it->val==target->val)
            {
                return it;
            }else
            {
                if(it->left)
                qp.push(it->left);
                if(it->right)
                qp.push(it->right);
            }
        }
        return target;
    }
};