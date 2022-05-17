class Solution {
public:
    void nextPermutation(vector<int>& nums) {
int n=nums.size();
        if(n==1)return;int j=n-1;
        for(int i=n-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {
                j=i-1;break;
            }
        }
        if(j==n-1)
        {
            reverse(nums.begin(),nums.end());return;
        }
        int k=0;
        for(int i=n-1;i>0;i--)
        {
            if(nums[i]>nums[j])
            {
                k=i;break;
            }
        }
        swap(nums[k],nums[j]);
        reverse(nums.begin()+j+1,nums.end());
        
    }
};