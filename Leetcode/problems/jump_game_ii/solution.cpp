class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n);
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--)
        {
            if(i+nums[i]>=n-1)
            {
                dp[i]=1;
            }
            else
            {
                int mini=INT_MAX-1;
                for(int j=i+nums[i];j>i;j--)
                {
                    mini=min(dp[j],mini);
                    
                }
                dp[i]=1+mini;
            }
        }
        
        
        return dp[0];
    }
};