class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
       stack<pair<int,int>>inp,inn;
        vector<int>left(arr.size()),right(arr.size());
        for(int i=0;i<arr.size();i++)left[i]=i+1;
        for(int i=0;i<arr.size();i++)right[i]=arr.size()-i;
        for(int i=0;i<arr.size();i++)
        {
            while(!inp.empty()&&inp.top().first>arr[i])inp.pop();
            left[i]=inp.empty()?i+1:i-inp.top().second;
            inp.push({arr[i],i});
            
            
            while(!inn.empty() && inn.top().first>arr[i])
            {
                auto x=inn.top();inn.pop();
                right[x.second]=i-x.second;
            }
            inn.push({arr[i],i});
        }
        long long int ans=0,mod=1e9+7;
        for(int i=0;i<arr.size();i++)
        {
            ans+=((long)arr[i]*((long)left[i]*(long)right[i])%mod)%mod;
        }
        return (ans+mod)%mod;
    
    }
};