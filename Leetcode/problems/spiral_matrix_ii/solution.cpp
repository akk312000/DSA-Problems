class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         vector<vector<int>>dirs{{0,1},{1,0},{0,-1},{-1,0}};
        vector<vector<int>>res(n,vector<int>(n));
        int nr=n; if(nr==0)return res;
        int nc=n; if(nc==0)return res;
        vector<int>nSteps{nc,nr-1};
        int iDir=0;
        int ir=0,ic=-1;
        int count=1;
        while(nSteps[iDir%2])
        {
            for(int i=0;i<nSteps[iDir%2];i++)
            {
                ir+=dirs[iDir][0];ic+=dirs[iDir][1];
                res[ir][ic]=count;
                count++;
            }
            nSteps[iDir%2]--;
            iDir=(iDir+1)%4;
        
    }
        return res;
    }
};