class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
         int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        vector<int>temp;
        generate(nums,temp,ans,0,n);
        vector<vector<int>>anso;
    for(auto it:ans)
    {
        anso.push_back(it);
    }
        return anso;
    }
    void generate(vector<int>&nums,vector<int>temp,set<vector<int>>&ans,int ind,int n)
    {
         ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
        if(ind==n)
        {
            ans.insert(temp);
            return;
        }
        generate(nums,temp,ans,ind+1,n);
        temp.push_back(nums[ind]);
        generate(nums,temp,ans,ind+1,n);
        return;
        
    }
};