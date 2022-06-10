class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,nums.size(),k)-atmost(nums,nums.size(),k-1);
    }
     int atmost(vector<int>&nums,int n,int k)
    {                ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);

        int count=0;
        int left=0,right=0;
        int noo=0;
        while(right<n)
        {
            if(nums[right]%2==1)noo++;
            
            while(noo>k)
            {
                if(nums[left]%2==1)noo--;
               left++;
            }
                count+=(right-left+1);
            right++;
        }return count;
    }
};