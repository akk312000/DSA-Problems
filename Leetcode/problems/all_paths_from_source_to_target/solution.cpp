class Solution {
public:
 
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        int n=graph.size();
        vector<vector<int>>ans;
    vector<int>vp;
        dfs(graph,n,0,vp,ans);
        return ans;
    }
    void dfs(vector<vector<int>>&graph,int n,int node,vector<int>vp,vector<vector<int>>&ans)
    {
        if(node==n-1)
        {
            
            vp.push_back(node);
            ans.push_back(vp);
            return;
        }
        vp.push_back(node);
        for(auto it:graph[node])
        {
           
            dfs(graph,n,it,vp,ans);
        }
    }
};