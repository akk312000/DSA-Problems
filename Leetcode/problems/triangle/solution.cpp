class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n);
        for(int i=0;i<n;i++)
        {
            int k=triangle.size();
            vector<int>temp(k,-1);
            dp[i]=temp;
        }
    
        int ans=minTot(triangle,dp,n,0,0);
        return dp[0][0];
    }
    int minTot(vector<vector<int>>&triangle,vector<vector<int>>&dp,int n,int i,int j)
    {
        if(i>=n)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(i==n)
        {
            return triangle[i][j];
        }
        return dp[i][j]=min(triangle[i][j]+minTot(triangle,dp,n,i+1,j),triangle[i][j]+minTot(triangle,dp,n,i+1,j+1));
        
    }
};