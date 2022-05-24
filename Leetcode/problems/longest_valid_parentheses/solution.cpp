class Solution {
public:
    int longestValidParentheses(string s) {
     int maxans=0;
        stack<int>sp;sp.push(-1);
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('){sp.push(i);continue;}
            sp.pop();
            if(sp.empty())
            {
                sp.push(i);
            }
            else
            { int tp=sp.top();
            ans=max(ans,i-tp);}
        }
        return ans;
    }
};