class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int n=tasks.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[tasks[i]]++;
        }
        sort(tasks.begin(),tasks.end());
        int count=0;
        for(auto it:mp)
        {
            int numbers=it.second;
            // cout<<numbers<<endl;
            if(numbers<2)
            {
                return -1;
            }
            while(numbers>=2)
            {
                if(numbers-3>=2)
                {
                    numbers-=3;
                    
                }else 
                {
                   numbers-=2;
                }
                count++;
            }
        }
        return count;
    }
};