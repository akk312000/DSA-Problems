class Solution {
public:
    bool isPerfectSquare(int num) {
       long long int start=1;long long int end=INT_MAX;
        
        while(start<=end)
        {
           long long int mid=start+(end-start)/2;
            if(mid*mid==num)
            {
                return true;
            }
            else if(mid<num/mid)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            
        }
        return false;
    }
};