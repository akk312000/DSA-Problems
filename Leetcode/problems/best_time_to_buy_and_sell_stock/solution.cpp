class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int ans=0;
        int maxindex=0,minindex=0;
        int maxi=0,mini=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]>maxi)
            {
                maxi=prices[i];
                maxindex=i;
            }
            if(prices[i]<mini)
            {
                mini=prices[i];
                minindex=i;
            }
            if(minindex>maxindex)
            {
                
                maxindex=minindex;
                maxi=prices[maxindex];
            }
            ans=max(ans,prices[maxindex]-prices[minindex]);
        }
        ans=max(ans,prices[maxindex]-prices[minindex]);
        return ans;
    }
};