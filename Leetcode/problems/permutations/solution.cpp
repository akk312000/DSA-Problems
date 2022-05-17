class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
                set<vector<int>>sp;

        while(1)
        {
        int n=nums.size();
       int j=n-1;
        for(int i=n-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {
                j=i-1;break;
            }
        }
        if(j==n-1)
        {
            reverse(nums.begin(),nums.end());
           
        }
            else{
        int k=0;
        for(int i=n-1;i>0;i--)
        {
            if(nums[i]>nums[j])
            {
                k=i;break;
            }
        }
        swap(nums[k],nums[j]);
        reverse(nums.begin()+j+1,nums.end());}
                        sp.insert(nums);

            ans.push_back(nums);
                        if(ans.size()>sp.size()){ans.pop_back();break;}

        }
        return ans;
    }
    
};