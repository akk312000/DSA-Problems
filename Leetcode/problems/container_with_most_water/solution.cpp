class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int ans=0;
        while(left<right)
        {
            int area=(right-left)*(min(height[left],height[right]));
            ans=max(ans,area);
            if(height[left]<height[right])
            {
                left++;
            }
            else
                right--;
            
            
        }
        return ans;
        
        
        }
};