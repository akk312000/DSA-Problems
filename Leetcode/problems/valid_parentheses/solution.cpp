class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>sp;
        int c1=0,c2=0,c3=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                sp.push('(');c1++;
            }
            else if(s[i]==')')
            {
                c1--;
            }
            if(s[i]=='{')
            {
                sp.push('{');c2++;
            }
            else if(s[i]=='}')
            {
                c2--;
            }
            
            if(s[i]=='[')
            {
                sp.push('[');c3++;
            }
            else if(s[i]==']')
            {
                c3--;
            }
            if(s[i]==')')
            {
                if(!sp.empty()&&sp.top()=='(')
                {
                    sp.pop();
                }
                else
                {
                    return false;
                }
            }
            if(s[i]==']')
            {
                if(!sp.empty()&&sp.top()=='[')
                {
                    sp.pop();
                }else return false;
            }
            if(s[i]=='}')
            {
                if(!sp.empty()&&sp.top()=='{')
                {
                    sp.pop();
                }else return false;
            }
            
            
            
            
        }
        if(c1==0&&c3==0&&c2==0)
        { return true;}
        else {return false;}
    }
};