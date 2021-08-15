class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       vector<int>ans;
        
        for(int i=0;i<nums.size()/2;i++)
        {
        ans.push_back(nums[i]);
            ans.push_back(nums[nums.size()-i-1]);
        }
        if(nums.size()%2==1)
        {
            ans.push_back(nums[nums.size()/2]);
        }
        return ans;
    }
};