class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int table[n][n];
        memset(table,0,sizeof(table));
        int ans=1;
                int a=0,b;
        for(int i=0;i<n;i++)
        {
            table[i][i]=1;
        }
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                table[i][i+1]=1;ans=2;a=i;b=i+1;
            }
        }

        
        for(int k=3;k<=n;k++)
        {
            for(int i=0;i<n-k+1;i++)
            {
                int j=i+k-1;
                if(table[i+1][j-1]&&s[i]==s[j])
                {
                    table[i][j]=true;
                   if(k>ans)
                   {
                       ans=k;
                       a=i;b=j;
                   }
                    
                }
            }
        }
        string temp="";
        for(int i=a;i<a+ans;i++)
        {
            temp.push_back(s[i]);
        }
        return temp;
        
    }
};