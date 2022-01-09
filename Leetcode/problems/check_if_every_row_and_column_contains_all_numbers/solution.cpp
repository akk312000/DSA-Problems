class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        bool ans=false;
        vector<vector<int>>vp;
        vector<vector<int>>cp;
        for(int i=0;i<n;i++)
        {
            vector<int>jp;
            for(int j=0;j<n;j++)
            {
                jp.push_back(matrix[i][j]);
                
            }
            sort(jp.begin(),jp.end());
            vp.push_back(jp);
        }
        for(int i=0;i<n;i++)
        {
            vector<int>jp;
            for(int j=0;j<n;j++)
            {
                jp.push_back(matrix[j][i]);
                
            }
            sort(jp.begin(),jp.end());
            cp.push_back(jp);
        }
        vector<int>sp(n);
        for(int i=1;i<=n;i++)
        {
            sp[i-1]=i;
        }
        vector<int>kp;
        kp=vp[0];
        if(kp!=sp||sp!=cp[0])
        {
            return false;
        }
        for(int i=0;i<n;i++)
        {
            if(vp[i]!=cp[i])
            {
                return false;
            }
            else if(vp[i]!=sp)
            {
                return false;
            }
        }
        return true;
        
    }
};