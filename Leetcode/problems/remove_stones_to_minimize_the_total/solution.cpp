class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
         priority_queue<int> vp;
        for(int i=0;i<piles.size();i++)
        {
            vp.push(piles[i]);
        }
        
        for(int i=0;i<k;i++)
        {
            int kp=vp.top();
            vp.pop();
            int ans=ceil(kp/2.0);
            vp.push(ans);
        }
        long long int sum=0;
       while (!vp.empty()) {
       sum+= vp.top();
        vp.pop();
    }
        return sum;
        
    }
};