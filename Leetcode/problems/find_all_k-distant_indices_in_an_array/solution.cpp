class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>keys,ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==key)
            {
                keys.push_back(i);
            }
        }
        for(int i=0;i<nums.size();i++)
        {
                bool ispresent=false;

            for(int j=0;j<keys.size();j++)
            {
                if(abs(keys[j]-i)<=k)
                {
ispresent=true;                   
                    
                
                }
                
            }
            if(ispresent)
            {
                ans.push_back(i);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};