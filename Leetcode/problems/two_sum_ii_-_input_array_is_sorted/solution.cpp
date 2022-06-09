class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        if(n==2)
        {
            vector<int>ans;
            ans.push_back(1);
            ans.push_back(2);
            return ans;
        }
        
        for(int i=0;i<n;i++)
        {
            int kp=(target-numbers[i]);
            auto it=lower_bound(numbers.begin()+i+1,numbers.end(),kp)-numbers.begin();
            if(it<n&&numbers[it]==kp)
            {
               
                vector<int>ans;
                ans.push_back(i+1);
                ans.push_back(it+1);
                return ans;
            }
            
        }
        return numbers;
    }
};