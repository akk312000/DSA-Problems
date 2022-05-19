class Solution {
public:
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
     int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int anso=find(matrix,dp,i,j,-1,n,m);
              
                ans=max(ans,anso);
            }
        }
return ans;

            }
            int find(vector<vector<int>>& matrix,vector<vector<int>>& dp,int i,int j,int prev,int n,int m)
        {
            
                if(dp[i][j]!=-1)return dp[i][j];
            int dx[4][2]={{0,1},{0,-1},{-1,0},{1,0}};
            auto valid=[&](int i,int j,int n,int m)
        {
            return i<0 or j<0 or i>=n or j>=m?false:true;
        };
            dp[i][j]=1;
            for(int ip=0;ip<4;ip++)
            {
                int nx=i+dx[ip][0];
                int ny=j+dx[ip][1];
                if(valid(nx,ny,n,m)==true&&matrix[nx][ny]>matrix[i][j])
                {
                    dp[i][j]=max(dp[i][j],1+find(matrix,dp,nx,ny,matrix[i][j],n,m));
                  
                }
                
            }
            return dp[i][j];
        }
};