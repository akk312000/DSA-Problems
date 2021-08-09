class Solution {
public:
    int minSwaps(string s) {
        
       int count=0;
        int maxcount=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==']')
            {
                count++;
                maxcount=max(maxcount,count);
            }
            else
            {
                count--;
            }
        }
        return (maxcount+1)/2;
    }
};