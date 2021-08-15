class Solution {
public:
    int minNonZeroProduct(int p) {
        if(p==1)return 1;
        long long int div=(1L<<p)-1;
        long long int ans=div;int mod=1000000007;
        long long int times=(div-1)/2;
        long long int number=div-1;
        long long int aux=1;
       
        aux=power(number,times,mod)%mod;
        div=(div)%mod;
        ans=(aux*div)%mod;
        return ans;
        
        
    }
   long long int power(long long x,long long int y, int p)
{
    long long int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res%p;
}
};