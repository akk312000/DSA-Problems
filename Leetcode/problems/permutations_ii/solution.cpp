class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>vp;
        sort(nums.begin(),nums.end());
        vector<vector<int>>vpo;
        do{
            vp.insert(nums);
        }
        while(next_permutation(nums.begin(),nums.end()));
        for(auto it:vp)
        {
            vpo.push_back(it);
        }
    return vpo;
    }
    
    
    
};