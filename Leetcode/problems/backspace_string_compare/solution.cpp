class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string resultant1="",resultant2="";
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='#')
            {
                resultant1.push_back(s[i]);
            }
            else
            {
                if(resultant1.size())
                resultant1.erase(resultant1.size()-1);
            }
        }
        
        
        for(int i=0;i<t.size();i++)
        {
            if(t[i]!='#')
            {
                resultant2.push_back(t[i]);
            }
            else
            {
                if(resultant2.size())
                resultant2.erase(resultant2.size()-1);
            }
        }
        if(resultant1==resultant2)
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
    }
};