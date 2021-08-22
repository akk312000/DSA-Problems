class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
       
        map<int,int>mp;
       for(int i=0;i<n;i++)
       {
           int no=stoi(nums[i], 0, 2);
           mp[no]++;
       }
        for(int i=0;i<(1<<n);i++)
        {
            if(!mp[i])
            {
             return giveanswer(i,n);  
            }
        }
        return "0";
    }
    string giveanswer(int n,int pad)
    {
        string temp="";
        
    // Size of an integer is assumed to be 32 bits
    for (int i = pad-1; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            temp.push_back('1');
        else
            temp.push_back('0');
    }
return temp;
    }
    

};