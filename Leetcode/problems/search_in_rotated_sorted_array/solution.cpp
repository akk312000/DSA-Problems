class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0,end=n-1;
       return binarySearch(nums,start,end,target);
    }
    int binarySearch(vector<int>& nums, int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
  
       
        if (nums[mid] == x)
            return mid;
   
       if(nums[mid]>=nums[l])
       {
           if(x<=nums[mid]&&x>=nums[l])
           {
               return binarySearch(nums,l,mid-1,x);
           }
           else
           {
              return binarySearch(nums,mid+1,r,x);
           }
           
       }
        else
        {
          if(x>=nums[mid]&&x<=nums[r])
          {
              return binarySearch(nums,mid+1,r,x);
          }
            else
            {
               return binarySearch(nums,l,mid-1,x);
            }
        }
       
  
        
      
    }
  
    
    return -1;
}
};