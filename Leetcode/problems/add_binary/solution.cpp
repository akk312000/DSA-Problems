class Solution {
public:
    string addBinary(string a, string b) {
    reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string ans="";int carry=0;int i,j;
        for( i=0,j=0;i<a.size()&&j<b.size();i++,j++)
        {
            if(a[i]=='1'&&b[j]=='1')
            {
                if(carry==1)
                {
                    ans.push_back('1');
                }
                else ans.push_back('0');carry=1;
            }
            else if((a[i]=='0'&&b[i]=='1')||(a[i]=='1'&&b[i]=='0'))
            {
                if(carry==1)
                {ans.push_back('0');}
                else{
                ans.push_back('1');}
            }
            else
            {
                if(carry==1)
                {
                    ans.push_back('1');
                    carry=0;
                }
                else ans.push_back('0');
            }
        }
        while(i<a.size())
        {
            if(carry)
            {
               if(a[i]=='1')
               {ans.push_back('0');}
                else {ans.push_back('1');carry=0;}
            }
            else
            {
                 if(a[i]=='1')
               {ans.push_back('1');carry=0;}
                else ans.push_back('0');
            }
            i++;
        }
        while(j<b.size())
        {
            if(carry)
            {
               if(b[j]=='1')
               { ans.push_back('0');}
                else {ans.push_back('1');carry=0;}
            }
            else
            {
                if(b[j]=='1')
               { ans.push_back('1');}
                else {ans.push_back('0');carry=0;}
            }
            j++;
        }
        if(carry)
        {
            ans.push_back('1');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};