class Solution {
public:
    string capitalizeTitle(string title) {
        int n=title.size();
        vector<string>sp;
        string sample="";
        for(int i=0;i<n;i++)
        { 
            char tp=title[i];
            if(tp!=' ')
            {
                sample.push_back(title[i]);
                
            }
            else
            {
               
                sp.push_back(sample);
                sample="";
                
            }
        }

        sp.push_back(sample);
    
        string ans="";int l=false;
        for(int i=0;i<sp.size();i++)
        {
            string a=sp[i];if(i==sp.size()-1)l=true;
            if(a.size()<=2)
            {
                for(int j=0;j<a.size();j++)
                {
                    a[j]=tolower(a[j]);
                }
                ans+=a;
                if(l==false)
                ans+=" ";
            }
            else
            {
                for(int j=0;j<a.size();j++)
                {
                    if(j==0)
                    {
                        a[j]=toupper(a[j]);
                    }
                    else
                    {
                        a[j]=tolower(a[j]);
                    }
                }
                ans+=a;
                if(l==false)
                ans+=" ";
            }
          
        }
       return ans;
    }
};