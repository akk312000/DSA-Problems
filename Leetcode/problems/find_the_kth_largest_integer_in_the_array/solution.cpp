class Solution {
public:

    string kthLargestNumber(vector<string>& nums, int k) {
        int n=nums.size();
        
        sort(nums.begin(),nums.end(),[]
    (const std::string& first, const std::string& second){
        // return first.size() < second.size();
        if(first.size()==second.size())
        {
            return first<second;
        }
        return first.size()<second.size();
    });
    
        return nums[n-k];
        
        
        
        
        
    }
};