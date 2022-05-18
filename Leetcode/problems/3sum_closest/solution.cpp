class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		sort(nums.begin(),nums.end());
		int n=nums.size();int diffmax=INT_MAX;int ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                int diff=abs(target-sum);
                if(diff<diffmax)
                {
                    diffmax=diff;
                    ans=sum;
                }
                if(sum>target)
                {
                    k--;
                }
                else j++;
            }
        }
        return ans;
		
			
			}
		};