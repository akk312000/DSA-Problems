#include<bits/stdc++.h>
class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        
    bool mutated=false;
    for(int i=0;i<num.size();i++)
    {
        int d=num[i]-'0';
        num[i]=max(d,change[d])+'0';
        if(change[d]<d&&mutated==true)
        {
            break;
        }
        if(change[d]>d)
        {
            mutated=true;
        }
    }
        return num;
    }
};