class Solution {
public:
    int longestPalindrome(vector<string>& words) {
     
        map<string,int>mp;
        
        int unpaired=0;
        int ans=0;
        for(int i=0;i<words.size();i++)
        {
            string sp=words[i];
            if(sp[0]==sp[1])
            {
                if(mp[sp]>0)
                {
                    mp[sp]--;
                    unpaired--;
                    ans+=4;
                }
                else
                {
                    unpaired++;
                    mp[sp]++;
                }
            }
            else
            {
                string b=sp;
                reverse(b.begin(),b.end());
                if(mp[b]>0)
                {
                    ans+=4;
                    mp[b]--;
                }
                else
                {
                    mp[sp]++;
                }
            }
        }
        if(unpaired>0)
        {ans+=2;}
        return ans;
        
        
        
    }
};