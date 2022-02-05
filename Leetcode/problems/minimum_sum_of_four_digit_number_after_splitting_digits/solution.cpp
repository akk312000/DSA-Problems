class Solution {
public:
    int minimumSum(int num) {
        int a=num%10;
        num/=10;
        int b=num%10;
        num/=10;
        int c=num%10;
        num/=10;
        int d=num%10;
        vector<int>vp(4);
        vp[0]=a;vp[1]=b;vp[2]=c;
        vp[3]=d;
        sort(vp.begin(),vp.end());
        int ans= ((vp[0]*10+vp[2])+(vp[1]*10+vp[3]));
        
        return ans;
    }
};