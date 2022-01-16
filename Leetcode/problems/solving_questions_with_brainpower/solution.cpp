class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        long long int n=questions.size();
        vector<long long int>dp(200011,0);
        for(int i=n-1;i>=0;i--)
        {
          
                dp[i]=max(questions[i][0]+dp[questions[i][1]+i+1],dp[i+1]);
               
          
            
        }
   return dp[0];
        
    }
};