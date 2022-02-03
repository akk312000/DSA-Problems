class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        for(vector<int>edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        queue<int>q;
        q.push(source);
        vector<bool>seen(n);
        seen[source]=true;
        while(!q.empty())
        {
            auto node=q.front();
            q.pop();
            if(node==destination)return true;
            for(auto n:adj[node])
            {
                if(!seen[n])
                {
                    seen[n]=true;
                    q.push(n);
                }
            }
        }
        return false;
    }
};