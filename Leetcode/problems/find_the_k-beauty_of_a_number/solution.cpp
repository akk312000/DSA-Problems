class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);int count=0;
        int n=s.size();int cnt=0;
        string temp="";int i;
        for( i=0;i<k;i++)
        {
            temp.push_back(s[i]);
            
        }
         int myi = stoi(temp);
        if(myi!=0)
        {if(num%myi==0)count++;}
        for(;i<s.size();i++)
        {
            temp.push_back(s[i]);
           temp.erase(0,1);
            int myi=stoi(temp);
            if(myi==0)continue;
            if(num%myi==0)count++;
        }
        return count;
        
        
    }
};