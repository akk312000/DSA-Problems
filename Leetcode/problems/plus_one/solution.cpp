class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]<=8)
        {
            digits[n-1]=digits[n-1]+1;
            return digits;
        }
        else
        {
            int carry=1;digits[n-1]=0;
            for(int i=n-2;i>=0;i--)
            {
                if(carry==0)break;
                if(digits[i]==9)
                {
                    digits[i]=0;
                }
                else
                {
                    digits[i]++;
                    carry=0;
                }
                
            }
            if(carry==1)
            {
             digits.insert(digits.begin(),1);   
            }
            
        }
        return digits;
    }
};