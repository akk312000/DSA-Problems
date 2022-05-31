class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
               ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);

        int n=cardPoints.size();
        int ans=0,sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=cardPoints[i];
            
        }
        ans=sum;
        for(int i=0;i<k;i++)
        {
            sum-=cardPoints[k-i-1];
            sum+=cardPoints[n-i-1];
            ans=max(ans,sum);
        }
        return ans;
        
    }
};