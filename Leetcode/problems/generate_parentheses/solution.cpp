class Solution {
public:
vector<string>result;
    vector<string> generateParenthesis(int n) {
       helper(0,0,n,"") ;
       return result;
        
    }
    void helper(int begin,int end,int n,string current)
    {
if (current.length()==n*2) 
{
    result.push_back(current);
    return;
}
if(begin<n)helper(begin+1,end,n,current+"(");
if(end<begin)helper(begin,end+1,n,current+")");

    }
    
};