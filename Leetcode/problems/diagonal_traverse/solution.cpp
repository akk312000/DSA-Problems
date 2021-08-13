class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int>finalans;int timer=0;
        for(int j=0;j<m;j++)
        {int kp=j;vector<int>vp;
            for(int i=0;i<n&&kp>=0;i++)
            {
                vp.push_back(mat[i][kp]);
                kp--;
            }
         if(timer%2==0)
         {
             reverse(vp.begin(),vp.end());
             
         }
         for(auto it:vp)
         {
             finalans.push_back(it);
         }
         timer++;
         
        }
        for(int i=1;i<n;i++)
        {
            int kp=i;vector<int>vp;
            for(int j=m-1;j>=0&&kp<n;j--,kp++)
            {
                vp.push_back(mat[kp][j]);
            }
            if(timer%2==0)
         {
             reverse(vp.begin(),vp.end());
             
         }
         for(auto it:vp)
         {
             finalans.push_back(it);
         }timer++;
        }
        return finalans;
    }
};