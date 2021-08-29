class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxans=0;
        int n=nums.size();
        int count=0;
       
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                count++;
                maxans=max(maxans,count);
            }
            else
            {
              
                count=0;
                
            }
        }
        return maxans;
        
    }
};