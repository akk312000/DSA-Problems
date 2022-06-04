class Solution {
    // int count;
public:
    vector<vector<string>> solveNQueens(int n) {                 

        std::vector<std::vector<std::string>>temp;
        std::vector<std::string>vp(n,std::string(n,'.'));
        placeQueens(temp,vp,n,0);
        return temp;
        
    }
    bool checkisposs(vector<std::string>&vp,int n,int row,int col)
    {                 
        for(int i=0;i!=row;i++)
        {
            if(vp[i][col]=='Q')return false;
        }
        for(int i=row-1,j=col-1;i>=0&&j>=0;--i,--j)
        {
            if(vp[i][j]=='Q')return false;
        }
        for(int i=row-1,j=col+1;i>=0&&j<n;--i,++j)
        {
            if(vp[i][j]=='Q')return false;
        }
        return true;
     
    }
    void placeQueens(vector<vector<std::string>>&temp,vector<std::string>vp,int n,int row)
    {
        if(row==n)
        {
            temp.push_back(vp);
            return;
        }
        for(int i=0;i<n;i++)
        {
            vp[row][i]='Q';
           if(checkisposs(vp,n,row,i))
           {
               placeQueens(temp,vp,n,row+1);
           };
            vp[row][i]='.';
            
        }
    }
};