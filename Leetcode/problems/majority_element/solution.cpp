class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int majority=0;
     for(int i=0;i<32;i++)
     {
        int bits=0;int mask=1<<i;
         for(auto it:nums)
         {
             if(mask&it)
             {
                 bits++;
             }
         }
         if(bits>nums.size()/2)
         {
             majority=(majority|mask);
         }
     }
        return majority;
        
    }
};