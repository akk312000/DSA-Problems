class Solution {
public:
     int getvalue(int n,vector<int>& mapping){
        int value=0,t=1;
        if(n==0)
            return mapping[0];
        while(n!=0){
            int temp=n%10;            
            value=mapping[temp]*t+value;
            t=t*10, n=n/10;
        }
        return value;
    } 
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        
        multimap<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            
           int num= getvalue(nums[i],mapping);
            mp.insert({num,nums[i]});
            
        }
        
       
        vector<int>newvp;
        for(auto it:mp)
        {
            
         newvp.push_back(it.second); 
        }
        return newvp;
       
        
    }
};