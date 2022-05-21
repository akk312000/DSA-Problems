class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n=time.size();
    vector<int>dp(60,0);

       
        int k=0;
        for(int i=0;i<n;i++)
        {
           k+=dp[(600-time[i])%60];
            dp[time[i]%60]+=1;
        }
        return k;
    }
};