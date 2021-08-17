class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>sp;
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                
                int start=j+1;int end=n-1;
                int kp=target-(nums[i]+nums[j]);
                while(start<end)
                {
                    int sum=(nums[start]+nums[end]);
                    if(sum==kp)
                    {
                        vector<int>vp;
                        vp.push_back(nums[i]);
                        vp.push_back(nums[j]);
                        vp.push_back(nums[start]);
                        vp.push_back(nums[end]);
                        sp.insert(vp);
                        while(start<end&&nums[start]==nums[start+1])
                        {
                            start++;
                        }
                        while(start<end&&nums[end]==nums[end-1])
                        {
                            end--;
                        }
                        start++;end--;
                    }
                    else if(sum<kp)
                    {
                        start++;
                    }
                    else
                    {
                        end--;
                    }
                }
                
            }
        }
        for(auto it:sp)
        {
            ans.push_back(it);
        }
        return ans;
    }
};