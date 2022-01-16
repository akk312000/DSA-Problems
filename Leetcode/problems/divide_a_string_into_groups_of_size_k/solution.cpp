class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        
        
        int n=s.size();
        vector<string>vp;
        
        int c=0;string sp="";
        for(int i=0;i<n;i++)
        {
            if(c<k)
            {
                sp.push_back(s[i]);c++;
            }
            else
            {
                c=0;
                vp.push_back(sp);sp="";
                sp.push_back(s[i]);c++;
            }
            
        }
        while(sp.size()<k&&sp.size()>0)
        {
            sp.push_back(fill);
        }
        vp.push_back(sp);
        return vp;
    }
};