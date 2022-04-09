class Solution {
public:
    
    static bool compare(pair<int,int> &p1,
             pair<int, int> &p2)
    {
    // If frequencies are same, compare
    // values
    if (p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second > p2.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;    
        }
        vector<pair<int,int>>pb;
        for(auto it:mp)
        {
            pb.push_back({it.first,it.second});
        }
      
        sort(pb.begin(),pb.end(),compare);
            
        vector<int>ans;
       for(int i=0;i<k;i++)
       {
           ans.push_back(pb[i].first);
       }
        return ans;
        
    
        
        
    }
};