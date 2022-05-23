class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int len=strs.size();
        int dp[len+1][m+1][n+1];
        memset(dp,0,sizeof dp);
        
        
        for(int i=1;i<=len;i++)
        {
            for(int j=0;j<=m;j++)
            {
                for(int k=0;k<=n;k++)
                {
                    
                     int no1;
        string s=strs[i-1];
        no1=count(s.begin(),s.end(),'1');
        int no0=s.size()-no1;
        
       int res=dp[i-1][j][k];
        if(no0<=j&&no1<=k)
        {
            res=max(res,dp[i-1][j-no0][k-no1]+1);
        }
                    dp[i][j][k]=res;
                }
            }
        }

       return dp[len][m][n];
        
    }
};