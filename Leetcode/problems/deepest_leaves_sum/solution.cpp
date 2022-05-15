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
    int sum=0;int maxlevel=0;
    int deepestLeavesSum(TreeNode* root) {
        findSum(root,1);
        return sum;
        
    }
    void findSum(TreeNode* node,int curr)
    {
        if(node==NULL)
        {
            return ;
        }
        if(curr>maxlevel)
        {
            sum=0;
            maxlevel=curr;
        }
        if(curr==maxlevel)
        {
            sum+=node->val;
            
        }findSum(node->left,curr+1);
            findSum(node->right,curr+1);
    
    }
};