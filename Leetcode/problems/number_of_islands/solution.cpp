class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        int columns=grid[0].size();
        vector<vector<int>>visited(rows,vector<int>(columns,0));
        
        int ans=0;
        
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                if(grid[i][j]=='1'&&visited[i][j]==0)
                {
                    dfs(grid,visited,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
    void dfs(vector<vector<char>>& grid,vector<vector<int>>& visited,int i,int j)
              {
                  visited[i][j]=1;
                  int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
                  for(int ip=0;ip<4;ip++)
                  {
                      int nx=i+dir[ip][0];
                      
                      int ny=j+dir[ip][1];
                      // cout<<nx<<" "<<ny<<endl;
                      if(nx>=0&&nx<grid.size()&&ny>=0&&ny<grid[0].size()&&grid[nx][ny]=='1'&&visited[nx][ny]==0)
                      {
                          dfs(grid,visited,nx,ny);
                      }
                  }
                  return;
                  
                  }
};