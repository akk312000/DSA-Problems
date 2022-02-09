class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int totalOranges=0;
        int currentOranges=0;
        int totalDays=0;
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>qp;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]!=0)totalOranges++;
                if(grid[i][j]==2)qp.push({i,j});
            }
        }
        int direction[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
        while(!qp.empty())
        {
            int size=qp.size();
            currentOranges+=size;
            while(size--)
            {
            auto it=qp.front();
                qp.pop();
                int x=it.first;
                int y=it.second;
                for(int i=0;i<4;i++)
                {
                    int nx=x+direction[i][0];
                    int ny=y+direction[i][1];
                    if(nx<0 or ny<0 or nx>=n or ny>=m or grid[nx][ny]!=1)continue;
                    qp.push({nx,ny});
                    grid[nx][ny]=2;
                    
                }
                
            }
            if(!qp.empty())
            {
                            totalDays++;

            }
            
        }
        
        return totalOranges==currentOranges? totalDays:-1;
    }
};