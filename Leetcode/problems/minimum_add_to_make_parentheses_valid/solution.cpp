class Solution {
public:
    int minAddToMakeValid(string s) {
stack<char>sp;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                sp.push('(');
            }
            else if(!sp.empty()&&s[i]==')'&&sp.top()=='(')
            {
                
                sp.pop();
            }
            else
            {
                sp.push(')');
            }
        }
        return sp.size();
    }
};