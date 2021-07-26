class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
        {
            return "1";
        }
        
        string s=countAndSay(n-1);
        if(s=="1")return "11";
        string temp="";
       
     
        for(int i=0;i<s.size();i++)
        { int count=1;
           while((i+1<s.size())&&(s[i]==s[i+1]))
           {
               count++;i++;
           }
         temp+=to_string(count)+s[i];
        }
        return temp;
    }
};