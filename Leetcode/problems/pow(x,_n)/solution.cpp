class Solution {
public:
    double myPow(double x, long long int n) {
       
        double nn=x;
        int sign=0;
        if(n<0)sign=1;double ans=1.0;
        if(n<0){n*=-1;}
        while(n)
        {
            if(n%2==0)
            {
                x=(x*x);
                n/=2;
            }
            else
            {
                ans=x*ans;
                n--;
            }
        }
        if(sign==1)
        {
            return (double)(1.0)/(double)(ans);
        }
        return ans;
        
        
    }
};