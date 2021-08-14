class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
       string ans=findans(strs,0,strs.size()-1);
        return ans;
    }
    
    string findans(vector<string>arr,int start,int end)
    {
        if(start==end)
        {
            return arr[start];
        }
        else
        {
            int mid=(start+end)/2;
          string sp1=findans(arr,start,mid);
        string sp2=findans(arr,mid+1,end);
            return common(sp1,sp2);
        }
    }
    string common(string sp1,string sp2)
    {
        int n=sp1.size(),m=sp2.size();
        string temp="";
        for(int i=0;i<min(n,m);i++)
        {
            if(sp1[i]!=sp2[i])
            {
                return temp;
            }
            temp.push_back(sp1[i]);
        }
        return temp;
    }
    
};