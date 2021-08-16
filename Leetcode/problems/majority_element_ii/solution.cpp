class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        
        int num1=-1,num2=-1;
        int count1=0,count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(num1==nums[i])
            {
                count1++;
            }
            else if(num2==nums[i])
            {
                count2++;
            }
            else if(count1==0)
            {
                num1=nums[i];
                count1=1;
            }
            else if(count2==0)
            {
                num2=nums[i];
                count2=1;
            }
            else
            {
                count1--;
                count2--;
            }
        }
    vector<int>ans;bool found1=false,found2=false;
        int cn1=0,cn2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(num1==nums[i])
            {
                cn1++;
            }
            else if(num2==nums[i])
            {
cn2++;            }
        }int n=nums.size();
        if(cn1>n/3)ans.push_back(num1);
        if(cn2>n/3)ans.push_back(num2);
        return ans;
        
        
        
    }
};