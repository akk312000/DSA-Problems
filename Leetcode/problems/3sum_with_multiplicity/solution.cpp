class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
sort(arr.begin(),arr.end());
        int mod=1000000007;int count=0;int n=arr.size();
        for(int i=0;i<n-2;i++)
        {
            int tp=target-arr[i];
            int start=i+1;
            int end=n-1;
            while(start<end)
            {
                if(arr[start]+arr[end]<tp)
                {
                    start++;
                }
                else if(arr[start]+arr[end]>tp)
                {
                    end--;
                }
                else if(arr[start]!=arr[end])
                {int left=1,right=1;
                    while(arr[start]==arr[start+1]&&start<end)
                    {
                        left++;start++;
                        
                        
                    }
                 while(arr[end]==arr[end-1]&&start<end)
                 {
                     right++;end--;
                 }
                 count=(count+(left*right)%mod)%mod;
                 start++;end--;
                
                }
                else
                {
                    int kp=((end-start+1)*(end-start))%mod;
                    count=(count+kp/2)%mod;break;
                }
            }
        }
        return count;
    }
};