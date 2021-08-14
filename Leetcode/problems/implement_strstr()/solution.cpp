class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        if(n==0&&m==0)return 0;
        if(m>n)return -1;
        int ans=-1;
        for(int i=0;i<n-m+1;i++)
        {
            bool flag=true;
            for(int j=i;j<i+m;j++)
            {
                if(haystack[j]!=needle[j-i])
                {
                    flag=false;break;
                }
            }
            if(flag)
            {
                return i;
            }
            
            
            
        }
        return ans;
        
    }
};