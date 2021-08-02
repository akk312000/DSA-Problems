class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();int res1=-1,res2=-1;
        int first=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int end=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        if(first==n)
        {
            res1=-1,res2=-1;
        }
        else if(first!=n&&nums[first]==target&&nums[end]==target)
        {
            res1=first;res2=end;
        }
        vector<int>returnAns;
        returnAns.push_back(res1);
        returnAns.push_back(res2);
        return returnAns;
        
        
    }
        
        
    
};