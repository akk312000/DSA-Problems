class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        priority_queue<int, vector<int>, 
                       greater<int>>pq;
        int n=matrix.size();
        for(int i=0;i<n*n;i++)
        {
         pq.push(matrix[i/n][i%n]);  
        }
        for(int i=0;i<k-1;i++)
        {
            pq.pop();
           
            
        }
        return pq.top();
        
    }
};