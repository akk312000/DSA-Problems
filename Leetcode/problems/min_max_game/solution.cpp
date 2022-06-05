class Solution {
public:
    int minMaxGame(vector<int>& nums) {
                 ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);

        int n=nums.size();
        while(nums.size()>1)
        {
            n=nums.size();
            vector<int>temp(n/2);
            for(int i=0;i<n/2;i++)
            {
                if(i%2==0)
                {
                    temp[i]=min(nums[2*i],nums[2*i+1]);
                }
                else
                {
                    temp[i]=max(nums[2*i],nums[2*i+1]);
                }
                
            }   
            nums=temp;
            
        }
        return nums[0];
    }
};