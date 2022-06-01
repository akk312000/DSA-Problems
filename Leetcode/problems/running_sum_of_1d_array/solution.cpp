class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
                 ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);

        int n=nums.size();
        vector<int>ans(n,0);
        ans[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            ans[i]=nums[i]+ans[i-1];
        }
        return ans;
    }
};