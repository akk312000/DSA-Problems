class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int sm=INT_MAX;
        int lg=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sm=min(sm,nums[i]);
            lg=max(lg,nums[i]);
        }
        return __gcd(sm,lg);
    }
};