class Solution {
public:
    string getPermutation(int n, int k) {
        string nums="";k--;
        for(int i=1;i<=n;i++)
        {
            nums.push_back(i+'0');
        }
         while(k--)
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
                       

                        

        }
        return nums;
    }
};