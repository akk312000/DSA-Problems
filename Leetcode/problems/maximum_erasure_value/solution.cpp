class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
                        ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);

        int n=nums.size();
        unordered_map< int, int>mp;
       int left=0,right=0; int ans=0;
        int sum=0;
      while(right<n)
      {
          int x=nums[right];
          if(mp.find(x)!=mp.end())
          {
              int index=mp[x];
              while(left<=index){
                  mp.erase(nums[left]);
                  sum-=nums[left];
                  left++;
              }
          }
          mp[x]=right;
          sum+=x;right++;
          ans=max(ans,sum);
      }
        return ans;
    }
};