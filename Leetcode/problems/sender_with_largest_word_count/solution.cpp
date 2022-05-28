class Solution {
public:
    int cnt_space(int i, int count, string buf)
{
  
    // input sentence
    char ch;
    ch = buf[0];
  
    // counting spaces
    while (ch != '\0') {
        ch = buf[i];
        if (isspace(ch))
            count++;
  
        i++;
    }
  
    // returning number of spaces
    return (count);
}
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        int n=messages.size();
        
//         vector<string,string>vp;
//         for(int i=0;i<n;i++)
//         {
            
//         }
        map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            string temp=messages[i];
            int no=cnt_space(0,0,temp)+1;
                // transform(senders[i].begin(), senders[i].end(), senders[i].begin(), ::tolower);
            mp[senders[i]]+=no;
        }
        int ans=0;string anstemp="";
        for(auto it:mp)
        {
            string sl=it.first;
            // transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
            if(it.second>=ans&&sl>anstemp)
            {
                ans=it.second;
                anstemp=it.first;
            }
        }
        return anstemp;
    }
};