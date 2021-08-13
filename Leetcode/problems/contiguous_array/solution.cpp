class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans=0,maxans=0;
        unordered_map<int,int>mp;int count=0;
       
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)count--;
            else if(nums[i]==1)count++;
            if(count==0)
            {
                maxans=max(maxans,i+1);
            }
           else if(mp.find(count)!=mp.end())
            {
                maxans=max(maxans,i-mp[count]);
            }
            else
            {
                mp[count]=i;
            }
        }
        return maxans;
    }
};