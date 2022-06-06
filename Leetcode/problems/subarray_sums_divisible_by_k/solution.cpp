class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
        unordered_map<int,int>mp;
        int count=0;
        int n=nums.size();
        int sum=0;
        mp[0]++;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int rem=((sum%k)+k)%k;
            
            if(mp[rem])
            {
                count+=mp[rem];
                mp[rem]++;
            }
            else
            {
                mp[rem]=1;
            }
            
            
        }
        return count;
        
    }
};