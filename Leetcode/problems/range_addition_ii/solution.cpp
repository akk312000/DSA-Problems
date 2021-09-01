class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        
        int ip=INT_MAX,jp=INT_MAX;
       for(int i=0;i<ops.size();i++)
       {
           ip=min(ip,ops[i][0]);
           jp=min(jp,ops[i][1]);
           
       }
        if(ip==INT_MAX)
        {
            ip=m;jp=n;
        }
        return ip*jp;
    }
};