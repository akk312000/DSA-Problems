class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();
        int currentsum=nums[0];int maxsofar=nums[0];
        for(int i=1;i<n;i++)
        {
            currentsum=max(nums[i],currentsum+nums[i]);
            
           maxsofar=max(maxsofar,currentsum);
        }
        return maxsofar;
        
    }
};