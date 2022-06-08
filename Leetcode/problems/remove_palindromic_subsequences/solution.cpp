class Solution {
public:
    bool checkpalin(string s)
    {
     int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s[n-i-1])return false;
        }
        return true;
    }
    int removePalindromeSub(string s) {
        int n=s.size();
        if(n==0)return 0;
        if(checkpalin(s))
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    
};