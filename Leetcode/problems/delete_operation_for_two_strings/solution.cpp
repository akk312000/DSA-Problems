class Solution {
public:
    int minDistance(string word1, string word2) {
                        ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);

        int n=word1.size();
        int m=word2.size();
            vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        vector<int>prev(m+1),curr(m+1);
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0||j==0)
                {
                    curr[j]=0;
                }else if(word1[i-1]==word2[j-1])
                {
                    curr[j]=1+prev[j-1];
                }
                else
                {
                    curr[j]=max(prev[j],curr[j-1]);
                }
            }
            prev=curr;
        }
        
        return n+m-2*prev[m];
    }
    
};