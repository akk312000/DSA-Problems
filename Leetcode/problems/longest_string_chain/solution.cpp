class Solution {
public:
    static bool compare(string &a,string &b)
    {
        return a.length()<b.length();
    }

    int longestStrChain(vector<string>& words) {
                        ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);

        int n=words.size();
        sort(words.begin(),words.end(),compare);
        unordered_map<string,int>mp;
        int ans=0;
        for(auto word:words)
        {
            
            for(int i=0;i<word.size();i++)
            {
                string temp=word.substr(0,i)+word.substr(i+1);
            
                mp[word]=max(mp[word],mp[temp]+1);
                ans=max(ans,mp[word]);
               
            }
        }
        return ans;
    }
};