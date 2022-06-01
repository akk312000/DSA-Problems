class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
     int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(nums[abs(nums[i])-1]<0)
            {
                ans.push_back(abs(nums[i]));
            }
            nums[abs(nums[i])-1]*=-1;
        }
        
        return ans;
    }
};