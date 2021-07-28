class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int kp=k%nums.size();
        reverse(nums.begin(),nums.end());
        // for(auto it:nums)cout<<it<<" ";cout<<endl;
        reverse(nums.begin(),nums.begin()+kp);
                // for(auto it:nums)cout<<it<<" ";cout<<endl;

        reverse(nums.begin()+kp,nums.end());
                // for(auto it:nums)cout<<it<<" ";cout<<endl;

    }
};