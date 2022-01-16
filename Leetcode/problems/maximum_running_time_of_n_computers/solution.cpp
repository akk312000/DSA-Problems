class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long l=0,r=accumulate(begin(batteries),end(batteries),0LL)/n;
        while(l<r)
        {
            long long m=(l+r+1)/2,minutes=0;
            for(int b:batteries)
            {
                minutes+=min((long long)b,m);
                
            }if(minutes>=n*m)l=m;
                else r=m-1;
        }
        return l;
    }
};