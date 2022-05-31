class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,0);dp[n-1]=0;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]+i>=n-1)dp[i]=1;
            else
            {
             int mini=INT_MAX-1;
                for(int j=i+nums[i];j>i;j--)
                {
                    mini=min(1+dp[j],mini);
                }
                dp[i]=mini;
            }
        }
        return dp[0];
    }
};