class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n= nums.size();
        
        if(n==1)return 0;
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        for(int i=0;i<=n-k;i++)
        {
            ans=min( ans,abs(nums[i]-nums[i+k-1]));
        }
        return ans;
    }
};