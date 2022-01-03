class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        int n=numCourses;
        vector<int>adjacencylist[100000];
        for(int i=0;i<prerequisites.size();i++)
        {int kp=prerequisites[i][0];
         int pp=prerequisites[i][1];
    adjacencylist[kp].push_back(pp);            
            
        }
        int vis[n],dfsvis[n];
        memset(vis,0,sizeof(vis));
        memset(dfsvis,0,sizeof(vis));
        for(int i=0;i<n;i++)
        {
            if(!vis[i]){
                if(checkCycle(i,adjacencylist,vis,dfsvis)){
                    return false;
                }
            }
        }
        return true;
        
    }
    bool checkCycle(int node,vector<int>adj[],int vis[],int dfsvis[])
    {
        vis[node]=1;
        dfsvis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                if(checkCycle(it,adj,vis,dfsvis))return true;
            }
            else if(dfsvis[it])
            {
                return true;
            }
        }
        dfsvis[node]=0;
        return false;
    }
};