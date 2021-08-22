class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
       int n=matrix.size();
        int m=matrix[0].size();
        
        int minelement=INT_MAX;
        int noofneg=0;long long int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                minelement=min(minelement,abs(matrix[i][j]));sum+=abs(matrix[i][j]);
                if(matrix[i][j]<0)
                {
                noofneg++;
                }
            }
        }
        if((noofneg&1)==0)
        {
            return sum;
        }
        else
        {
            return sum-2*minelement;
        }
        
    }
};