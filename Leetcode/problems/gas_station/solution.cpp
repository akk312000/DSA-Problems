class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n=gas.size();
        
       
        int st=0;
        int sum1=0,sum2=0;
       
        for(int i=0;i<n;i++)
        {
            sum1+=gas[i];
            sum2+=cost[i];
            
        }
        if(sum2>sum1)
        {
            return -1;
        }
        int total=0;
        for(int i=0;i<n;i++)
        {
            total+=(gas[i]-cost[i]);
            if(total<0)
            { total=0;
                st=i+1;
            }
        }
        return st;
        
        
        
        
        
        
    }
};