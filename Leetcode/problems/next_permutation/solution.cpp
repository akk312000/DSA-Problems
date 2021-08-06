class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n<=1)return;
        int i;
        for( i=n-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])break;
        }
        if(i==0)
        {
            reverse(nums.begin(),nums.end());
            return;
            
        }
        int k;
        for(k=n-1;k>i;k--)
        {
            if(nums[k]>nums[i-1])break;
        }
        swap(nums[k],nums[i-1]);
        reverse(nums.begin()+i,nums.end());
        
        
    }
};