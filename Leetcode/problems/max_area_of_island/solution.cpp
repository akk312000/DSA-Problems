class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
        int ans=0;
        int n =grid.size(),m=grid[0].size();
        // vector<vector<int>>visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                // if(visited[i][j]==1)continue;
                if(grid[i][j]==1)
                {
                    ans=max(ans,dfs(grid,i,j));
                }
            }
        }
        return ans;
    }
    int dfs(vector<vector<int>>&grid,int ip,int jp)
    {
        grid[ip][jp]=-1;
        int dx[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        int ans=1;
        for(int i=0;i<4;i++)
        {
            int nx=ip+dx[i][0];
            int ny=jp+dx[i][1];
            if(nx>=0&&nx<grid.size()&&ny>=0&&ny<grid[0].size()&&grid[nx][ny]==1)
            {
                ans+=dfs(grid,nx,ny);
            }
        }
        // cout<<ans<<endl;
        return ans;
    }
};