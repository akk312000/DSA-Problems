class Solution {
public:
    int mySqrt(int x) {
       
         int start=1; int end=INT_MAX-1;
       
        while(start<=end)
            
        {  int mid=(start)+(end-start)/2;
            if(mid==x/mid)
            {
                return mid;
            }
            else if(mid<x/mid)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return start-1;
    }
};