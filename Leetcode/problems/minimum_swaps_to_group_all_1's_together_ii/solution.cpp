class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int wins=count(nums.begin(),nums.end(),1);
        int ans=INT_MAX;int cp=0;
        vector<int>num2(n*2);
        for(int i=0;i<wins;i++)
        {
            if(nums[i]!=1)
            {
                cp++;
            }
        }
        ans=min(ans,cp);
        for(int i=0;i<2*n;i++)
        {
            num2[i]=nums[i%n];
        }
        int begin=0;
        for(int i=wins;i<2*n;i++){
           
            if(num2[begin]==0)
            {
                cp--;
            }
             if(num2[i]==0)
            {
                cp++;
            }
           
            ans=min(ans,cp);
            begin++;
        }
        return ans;
    }
};