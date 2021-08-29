class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        vector< vector<int>>finalans;
         if(n<3)
         {
             return finalans;
         }
        for(int i=0;i<n-2;i++)
        {
              int target=-nums[i];
            if(i==0||nums[i]!=nums[i-1])
            {
                
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
               if(nums[j]+nums[k]==target)
               {
                   vector<int>temp;
                   temp.push_back(nums[i]);
                   temp.push_back(nums[j]);
                   temp.push_back(nums[k]);
                                   while(j<k&&nums[k]==nums[k-1])
                   {k--;}
                   while(j<k&&nums[j]==nums[j+1])
                   {j++;}
                   finalans.push_back(temp);
                   j++;
                   k--;
                   
                  
               }
                else if(nums[j]+nums[k]>target)
                {
                    k--;
                }
                else
                {
                    j++;
                }

            }
            }
        }
        
        return finalans;
    }
};