class Solution {
public:
    bool judgeSquareSum(int c) {
       for(long a=0;a*a<=c;a++)
       {
          int b=c-(a*a);
           int bd=sqrt(b);
           if(bd*bd==b)
           {
               return true;
           }
           
       }
        return false;
    }
};