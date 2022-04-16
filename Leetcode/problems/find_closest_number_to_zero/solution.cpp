class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=INT_MAX;int answer=0;
        for(int i=0;i<n;i++)
        {
            int diff=abs(nums[i]-0);
            if(diff<=ans)
            {
                
                ans=diff;
                answer=nums[i];
            }
        }
        return answer;
    }
};