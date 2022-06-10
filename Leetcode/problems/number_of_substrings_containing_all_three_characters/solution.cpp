class Solution {
public:
    int numberOfSubstrings(string s) {
                        ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);

        int l1=-1,l2=-1,l3=-1;
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a')
            {
                l1=i;
            }
            else if(s[i]=='b')
            {
                l2=i;
            }
            else if(s[i]=='c')
            {
                l3=i;
            }
            if(l1==-1||l2==-1||l3==-1)
            {
                continue;
            }
            ans+=(min({l1,l2,l3})+1);
        }
        return ans;
    }
};