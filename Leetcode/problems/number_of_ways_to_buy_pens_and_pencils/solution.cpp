class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long int answer=0;
        long long int penc=total/cost1;
        long long int penp=total/cost2;
        for(long long int i=0;i<=penc;i++)
        {
           answer+=(((total-cost1*i)/cost2)+1);
                
            }
                return answer;
        
    }
};