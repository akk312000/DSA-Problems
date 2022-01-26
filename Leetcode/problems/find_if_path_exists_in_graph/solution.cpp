class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>adj[n];
        for(int i=0;i<edges.size();i++)
        {
            int a=edges[i][0];int b=edges[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
            
        }
        vector<int>vis(n,0);
        dfs(source,adj,vis);
        if(vis[destination])
        {
            return true;
        }
        return false;
    }
void dfs(int node,vector<int>adj[],vector<int>&vis)
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(vis[it]==0)
            {
                dfs(it,adj,vis);
            }
        }
    }
};