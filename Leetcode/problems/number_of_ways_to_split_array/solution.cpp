class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long int n=nums.size();
        vector<long long int>pre(n);
        vector<long long int>post(n);
        pre[0]=nums[0];
        post[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+nums[i];
        }
         for(int i=n-2;i>=0;i--)
        {
            post[i]=post[i+1]+nums[i];
        }
       long long  int cnt=0;
        for(int i=0;i<n-1;i++)
        {
           
            if(pre[i]>=post[i+1])cnt++;
        }
//         for(int i=0;i<n;i++)
//         {
// cout<<pre[i]<<" ";
//         }
//         cout<<endl;
//         for(int i=0;i<n;i++)
//         {
// cout<<post[i]<<" ";
//         }
        
        return cnt;
    }
};