class Solution {
public:
    string longestPalindrome(string s) {
        
     int n=s.size();
        if(n<=1)return s;
        int l=0,r=n-1;
        int ans=1;
        string anso;
        for(int i=0;i<n;)
        {
            int ip=i;
            int jp=i;
            while(jp<n&&s[jp+1]==s[jp])
            {
               
                jp++;
            }
            i=jp+1;
            while(jp<r&&ip>0&&s[jp+1]==s[ip-1])
            {
                jp++;
                ip--;
            }
            int new_len=jp-ip+1;
            if(new_len>ans)
            {
                l=ip;
                ans=new_len;
            }
           
        }
        
        return s.substr(l,ans);
    }
};