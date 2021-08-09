class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string newString="";bool found=false;
        for(int i=0;i<words.size();i++)
        { string temp=words[i];
            newString+=temp;
         if(newString==s)
         {
             found=true;
             break;
         }
            
        }
        if(found)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};