class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>sp;
             int n=nums.size();

        for(int i=0;i<n;i++)
        {
            sp.insert(nums[i]);
        }
        if(n==0)return 0;
       
        int maxans=1;
        int ans=1;
        for(int i=0;i<n;i++)
        {
            if(sp.count(nums[i]-1)==0)
            {
                int ans=1;int j=1;
                while(sp.count(nums[i]+j))
                {
                ans++; j++;      
                }
                maxans=max(maxans,ans);
            }
        }
        return maxans;
    }
};