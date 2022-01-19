class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>vis(n,0);
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                dfs(isConnected,vis,i);
                count++;
            }
        }
        return count;
    }
    void dfs(vector<vector<int>>&isConnected,vector<int>&vis,int i)
    {
        for(int j=0;j<isConnected.size();j++)
        {
            if(isConnected[i][j]==1&&vis[j]==0)
            {
                vis[j]=1;
                dfs(isConnected,vis,j);
            }
        }
    }
};