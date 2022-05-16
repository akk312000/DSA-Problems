class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int dir[8][2]={{0,1},{1,0},{0,-1},{-1,0},{-1,-1},{1,1},{-1,1},{1,-1}};
        int n=grid.size();
        auto valid=[&](int i,int j,int n)
        {
            return i<0 or j<0 or i>=n or j>=n?false:true;
        };
        queue<pair<int,int>>qp;
        vector<vector<bool>>vis(n,vector<bool>(n,false));
        if(grid[0][0]==0)
        {
            qp.push({0,0});
            vis[0][0]=true;
        }
        int dist=1;
        for(;size(qp);dist++)
        {
            int m=size(qp);
            while(m--)
            {
                auto p=qp.front();qp.pop();
                int np=p.first;
                int mp=p.second;
                if(np==n-1&&mp==n-1)
                {
                    return dist;
                    
                }
                for(int i=0;i<8;i++)
                {
                    int x=np+dir[i][0];
                    int y=mp+dir[i][1];
                    if(valid(x,y,n)&&vis[x][y]==false&&grid[x][y]==0)
                    {
                        qp.push({x,y});
                        vis[x][y]=true;
                    }
                }
            }
        }
        return -1;
    }
};