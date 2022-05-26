class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
                set<vector<int>>ans;

        vector<vector<int>>sp;
        for(int i=0;i<n-3;i++)
        {
           for(int j=i+1;j<n-2;j++)
           {
               int k=j+1;
               int l=n-1;
               while(k<l)
               {
                   if(target-nums[i]-nums[l]==nums[j]+nums[k])
                   {
                       vector<int>vp;
                       vp.push_back(nums[i]);
                                              vp.push_back(nums[j]);

                                              vp.push_back(nums[k]);

                                              vp.push_back(nums[l]);
                       ans.insert(vp);k++;

                   }
                   else if(target-nums[i]-nums[l]>nums[j]+nums[k])
                   {
                       k++;
                   }
                   else l--;
               }
               while(j+1<n&&nums[j+1]==nums[j])j++;
           }
            while(i+1<n&&nums[i+1]==nums[i])i++;
        }
        for(auto it:ans)
        {
            sp.push_back(it);
        }
        return sp;
    }
};