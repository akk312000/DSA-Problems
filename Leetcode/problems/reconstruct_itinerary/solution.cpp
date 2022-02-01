class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string,multiset<string>>mp;
        for(int i=0;i<tickets.size();i++)
        {
            mp[tickets[i][0]].insert(tickets[i][1]);
            
        }
        stack<string>sp;
        sp.push("JFK");
        vector<string>ans;
        while(!sp.empty())
        {
            string src=sp.top();
            if(mp[src].size()==0)
            {
                ans.push_back(src);
                sp.pop();
            }
            else
            {
               auto dst=mp[src].begin();
                sp.push(*dst);
                mp[src].erase(dst);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};