class NumMatrix {
    private:
    int n,m;
    vector<vector<int>>vp;
public:
   
    NumMatrix(vector<vector<int>>& matrix) {
         n=matrix.size();
     m=matrix[0].size();
       vp=vector<vector<int>>(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                vp[i][j]=matrix[i-1][j-1]+vp[i-1][j]+vp[i][j-1]-vp[i-1][j-1];
            }
        } 
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return vp[row2+1][col2+1]-vp[row2+1][col1]-vp[row1][col2+1]+vp[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */