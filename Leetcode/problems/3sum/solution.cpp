class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>vp;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            if(i==0||(nums[i]!=nums[i-1]))
            {
                   int target=-nums[i];
            
                int low=i+1;
                int end=n-1;
                while(low<end)
                {
                    if(nums[low]+nums[end]==target)
                    {
                       vector<int>newvec;
                        newvec.push_back(nums[i]);
                        newvec.push_back(nums[low]);
                        newvec.push_back(nums[end]);
                        vp.push_back(newvec);
                        while(low<end&&nums[low]==nums[low+1])
                        {
                            low++;
                        }
                        while(low<end&&nums[end]==nums[end-1])
                        {
                            end--;
                        }
                        low++;end--;
                    }
                    else if(nums[low]+nums[end]<target)
                    {
                        low++;
                    }
                    else
                    {
                        end--;
                    }
                }
            }
            
        }
        
        return vp;
        
    }
};