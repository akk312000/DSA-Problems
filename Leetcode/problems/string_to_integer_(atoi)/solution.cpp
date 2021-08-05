class Solution {
public:
    int myAtoi(string s) {
        int base=0;
        int sign=1;int i=0;
        int n=s.size();
        
        while(s[i]==' ')
        {
            i++;
        }
        if(s[i]=='+'||s[i]=='-')
        {
            sign=1-2*(s[i]=='-');i++;
        }
        while(s[i]>='0'&&s[i]<='9')
        {
            
            if(base>INT_MAX/10||(base==INT_MAX/10&&s[i]-'0'>7))
            {
                if(sign>0)
                {
                    return INT_MAX;
                    
                }
                else {
                    return INT_MIN;
                }
            }
            
            base=10*base+(s[i++]-'0');
            
        }
        cout<<sign<<" this is the  "<<base<<endl;
        return base*sign;
        
        
    }
};