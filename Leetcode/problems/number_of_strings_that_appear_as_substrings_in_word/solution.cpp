class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        
        set<string>substrings;int n=word.size();
        for(int i=0;i<word.size();i++)
        {
            for(int j=0;j<=n-i;j++)
            {
                substrings.insert(word.substr(i,j));
            }
        }
        int count=0;
        for(auto it:substrings)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        for(int i=0;i<patterns.size();i++)
        {
            if(patterns[i].size()>word.size())continue;
            if(substrings.find(patterns[i])!=substrings.end())
            {
                count++;
            }
           
        }
        return count;
    }
};