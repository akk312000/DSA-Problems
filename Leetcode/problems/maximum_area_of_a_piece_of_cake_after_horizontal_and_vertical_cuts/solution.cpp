class Solution {
public:
    int maxArea(int h, int v, vector<int>& hCuts, vector<int>& vCuts) {
                       // ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
int mod=1e9+7;
        int ans=0;int n=hCuts.size(),m=vCuts.size();
        sort(hCuts.begin(),hCuts.end());
        sort(vCuts.begin(),vCuts.end());
        int hp=hCuts[0];int vp=vCuts[0];
        for(int i=1;i<hCuts.size();i++)
        {
            hp=max(hp,hCuts[i]-hCuts[i-1]);
        }
        long long hbo=max(h-hCuts[n-1],hp);
        for(int i=1;i<vCuts.size();i++)
        {
            vp=max(vp,vCuts[i]-vCuts[i-1]);
        }
        long long vbo=max(v-vCuts[m-1],vp);
        return hbo%mod*vbo%mod;
    }
};