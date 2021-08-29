class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<=2)return 0;
        int res=0;
        int prefix[n];
        int suffix[n];
        // memset(prefix,0,sizeof(prefix));
        // memset(suffix,0,sizeof(suffix));
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                prefix[i]=height[i];
            }
            else
            {
                prefix[i]=max(prefix[i-1],height[i]);
            }
        }
         for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)
            {
                suffix[i]=height[i];
            }
            else
            {
                suffix[i]=max(suffix[i+1],height[i]);
            }
        }
        for(int i=1;i<n-1;i++)
          {
            
        int lheight=height[i];
            int rheight=height[i];
            
            int hp=min(prefix[i],suffix[i]);
           
            res+=(hp-height[i]);
            
            
        }
        return res;
    }
};