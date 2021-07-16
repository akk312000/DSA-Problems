class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int>pq;int mini=INT_MAX;int res=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==1)
            {
                nums[i]=nums[i]*2;
            }
            pq.push(nums[i]);
            mini=min(mini,nums[i]);
        }
        while(pq.top()%2!=1)
        {
           
            res=min(res,pq.top()-mini);
             mini=min(mini,pq.top()/2);
            pq.push(pq.top()/2);
            pq.pop();
        }
        return min(res,pq.top()-mini);
    }
};