class Solution {
public:
    int maxArea(vector<int>& height) {
        int totalBars=height.size();
        int start=0;int end=totalBars-1;
        int ans=0;
        while(start<=end)
        {
            int mini=min(height[start],height[end]);
            int dist=end-start;
            ans=max(ans,mini*dist);
            if(height[start]<=height[end])
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return ans;
        
        
    }
};