class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>vp;
        returnpre(0,nums,vp);
    return vp;
    }
    void returnpre(int begin,vector<int>&nums,vector<vector<int>>&vp)
    {
        if(begin>=nums.size())
        {
            vp.push_back(nums);
            
        }
        else
        {
            for(int i=begin;i<nums.size();i++)
            {
                swap(nums[i],nums[begin]);
                 returnpre(begin+1,nums,vp);
                swap(nums[i],nums[begin]);
            }
        }
    }
};