class Solution {
public:
    bool digitCount(string num) {
        map<int,int>mp;
        for(int i=0;i<num.size();i++)
        {
            int kp=num[i]-'0';
            mp[kp]++;
        }
        bool ans=true;
        for(int i=0;i<num.size();i++)
        {
            if(num[i]-'0'!=mp[i])ans=false;
        }
        return ans;
    }
};