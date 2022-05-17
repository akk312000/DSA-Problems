class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int>mp;
        int ans=0;
        vector<int>pre(nums.size());
        pre[0]=nums[0];int n=nums.size();
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+nums[i];
        }
        
        for(int i=0;i<n;i++)
        {
            if(pre[i]==k)
            {
                ans++;
            }
            if(mp.find(pre[i]-k)!=mp.end())
            {
                ans+=mp[pre[i]-k];
            }
            mp[pre[i]]++;
        }
        return ans;
        
    }
};