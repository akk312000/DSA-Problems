class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if(prices.size()==1)
        {
            return 0;
        }
        int maxi=0;
        int less=INT_MAX;
        int i=0;int j=prices.size();
        int ans=0;
        int indm=0;int indl=0;
       for(int i=0;i<j;i++)
       {
           if(prices[i]>maxi)
           {
               maxi=prices[i];indm=i;
           }
           if(prices[i]<less&&indl<=indm)
           {
               ans=max(maxi-less,ans);
               less=prices[i];indl=i;
           }
           if(indl>indm)
           { 
               indm=indl;
               maxi=less;
           }
       }
        ans=max(maxi-less,ans);
        return ans;
        
    }
};