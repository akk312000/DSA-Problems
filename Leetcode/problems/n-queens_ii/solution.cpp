class Solution {
    private:
    int count;
public:
     int totalNQueens(int n) {                 

        std::vector<std::string>vp(n,std::string(n,'.'));
         count=0;
        placeQueens(vp,n,0);
        return count;
        
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
    void placeQueens(vector<std::string>vp,int n,int row)
    {
        if(row==n)
        {
            count++;
            return;
        }
        for(int i=0;i<n;i++)
        {
            vp[row][i]='Q';
           if(checkisposs(vp,n,row,i))
           {
               placeQueens(vp,n,row+1);
           };
            vp[row][i]='.';
            
        }
    }
};