class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n=nums.size();
       
        int total=0;
        for(int i=0;i<n;i++)
        {
            total^=nums[i];
            
        }
        return total;
        
        
        
    }
};