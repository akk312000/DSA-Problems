class Solution {
public:
    string reverseOnlyLetters(string s) {
       int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if(isalpha(s[i])&&isalpha(s[j]))
            {
                swap(s[i],s[j]);
                i++;j--;
            }
            else if(isalpha(s[i]))
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return s;
    }
};