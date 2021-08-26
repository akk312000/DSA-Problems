class Solution {
public:
    bool judgeSquareSum(int c) {
        long i=0;
        long j=sqrt(c);
        while(i<=j)
        {
            if(i*i+j*j==c)
            {
                return true;
            }
            else if(i*i+j*j>c)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
};