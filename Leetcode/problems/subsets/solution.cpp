class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
         ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
        vector<vector<int>>ans;
        int n=nums.size();
        int tot=1<<n;
        for(int i=0;i<tot;i++)
        {
            vector<int>tp;
            for(int j=0;j<n;j++)
            {
                if(1<<j&i)
                {
                    tp.push_back(nums[j]);
                }
            }
            ans.push_back(tp);
        }
        return ans;
    }
};