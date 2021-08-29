class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }int firstno=nums[0];
        int index=0;
        int prev=-10000;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=prev)
            {
                nums[index]=nums[i];
                prev=nums[i];index++;
            }
        }
        return index;
    }
};