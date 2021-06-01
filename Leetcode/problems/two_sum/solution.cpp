class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        vector<int>vals;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i];
            int b=target-nums[i];
            if(mp[b]&&mp[b]!=i)
            {
                vals.push_back(i);
                vals.push_back(mp[b]);break;
                
            }
        }
        return vals;
    }
};