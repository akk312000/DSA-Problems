class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        if(target==1)
        {
            return 0;
        }
        long long int s=1;
        if(maxDoubles==0)
        {
            return target-1;
        }
       long long int count=0;long long int cp=0;
       
       while(target>1)
       {
           if(target%2==1){target-=1;count++;}
           else if(maxDoubles) {
           target/=2;maxDoubles--;
           count++;}
           else
           {
              count+=(target-1);
               target=1;
           }
       }
        return count;
        
    }
};