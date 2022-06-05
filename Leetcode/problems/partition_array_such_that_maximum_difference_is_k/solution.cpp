class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=1;
        int prev=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]-prev<=k)
            {
                continue;
            }
            else
            {
                prev=nums[i];
                count++;
            }
        }
        return count;
    }
};