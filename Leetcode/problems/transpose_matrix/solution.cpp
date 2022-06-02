class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
                 ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);

        int n=matrix.size();
        int m=matrix[0].size();
        
        
        vector<vector<int>>ans;
        for(int i=0;i<m;i++)
        {
        vector<int>vp;
            for(int j=0;j<n;j++)
            {
                vp.push_back(matrix[j][i]);
            }
            ans.push_back(vp);
        }
        return ans;
    }
};