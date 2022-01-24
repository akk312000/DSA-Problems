class Solution {
public:
    int n,ans=0;
    int maximumGood(vector<vector<int>>& st) {
      n=size(st);
        string cur="";cur.reserve(n);
        dfs(st,cur,0,0);
        return ans;
    }
    void dfs(vector<vector<int>>&st,string&cur,int i,int cnt){
        if(i==n){
            if(valid(st,cur))ans=max(ans,cnt);
            return;
        }
        cur.append(1,'0');
        dfs(st,cur,i+1,cnt);
        cur.back()='1';
        dfs(st,cur,i+1,cnt+1);
        cur.pop_back();
    }
    bool valid(vector<vector<int>>&st,string &cur){
        for(int i=0;i<n;i++)
        {
            if(cur[i]=='1')
            {
                for(int j=0;j<n;j++)
                {
                    if(st[i][j]!=2&&st[i][j]!=cur[j]-'0')return false;
                }
                
            }
        }
        return true;
    }
};