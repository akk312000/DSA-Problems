class Solution {
public:
    int sx,sy,n,m;int empty=1;int res=0;
    int uniquePathsIII(vector<vector<int>>& grid) {
         n=grid.size();
         m=grid[0].size();
    int x,y; 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)sx=i,sy=j;
                else if(grid[i][j]==0)empty++;
                
            }
        }
        dfs(grid,sx,sy,0);
        return res;
        
        
    }
    void dfs(vector<vector<int>>& grid,int ip,int jp,int cnt) {
auto valid=[&](int i,int j,int n,int m)
        {
            return i<0 or j<0 or i>=n or j>=m?false:true;
        };
        if(valid(ip,jp,n,m)==false||grid[ip][jp]==-1)return ;
        if(grid[ip][jp]==2)
        {
            if(cnt==empty)
            {
                res++;
            }
            return;
        }
         int dx[4][2]={{0,1},{0,-1},{-1,0},{1,0}};
        grid[ip][jp]=-1;
        for(int i=0;i<4;i++)
            {
                int nx=ip+dx[i][0];
                int ny=jp+dx[i][1];
                 dfs(grid,nx,ny,cnt+1);
                  
                
                
            }
        grid[ip][jp]=0;
     
        
        
    }
 
};