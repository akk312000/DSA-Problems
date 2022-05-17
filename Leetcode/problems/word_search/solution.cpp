class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
             if(find(board,i,j,word)) return true; 
           }
       }
        return false;
    }
    bool find(vector<vector<char>>& board,int i,int j, string word)
    {

        if(!word.size())return true;
        if(i<0||i>=board.size()||j<0||j>=board[0].size()||board[i][j]!=word[0])return false;
        char ch=board[i][j];
        board[i][j]='*';
   string s= word.substr(1);
        bool ret=find(board,i+1,j,s)||find(board,i-1,j,s)||find(board,i,j-1,s)||find(board,i,j+1,s);
        board[i][j]=ch;
        return ret;
        
        

    }
};