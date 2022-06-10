class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
                        ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);

        return atmost(nums,nums.size(),k)-atmost(nums,nums.size(),k-1);
    }
    int atmost(vector<int>&nums,int n,int k)
    {                ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);

        int count=0;
        int left=0,right=0;
        unordered_map<int,int>mp;
        while(right<n)
        {
            if(mp.find(nums[right])==mp.end())
            {
                mp[nums[right]]=0;
            }
            mp[nums[right]]++;
            while(mp.size()>k)
            {
                mp[nums[left]]--;
                if(mp[nums[left]]==0)mp.erase(nums[left]);
                left++;
            }
                count+=(right-left+1);
            right++;
        }return count;
    }
};