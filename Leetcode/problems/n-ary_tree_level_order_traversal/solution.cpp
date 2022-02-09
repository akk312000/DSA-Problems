/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        queue<Node*>qp;
        vector<vector<int>>ans;
        if(!root)return ans;
        qp.push(root);
        while(!qp.empty())
        {
            ans.emplace_back();
         for(int i=qp.size();i>=1;i--)
         {
             Node* curr=qp.front();qp.pop();
             ans.back().push_back(curr->val);
             for(Node*child:curr->children){
                 qp.push(child);
             }
         }
            
        }
        return ans;
        
        
    }
};