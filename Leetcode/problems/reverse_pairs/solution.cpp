class Solution {
public:
    int reversePairs(vector<int>& nums) {                 ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);

        int n=nums.size();
        return sort(nums,0,n-1);
    }
    int sort(vector<int>&nums,int start,int end)
    {                 ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);

        if(start>=end)return 0;
      
        int mid=(start+end)/2;
        int ans=sort(nums,start,mid);
        int ans2=sort(nums,mid+1,end);
        int ans3=merge(nums,start,mid,end);
        return ans+ans2+ans3;
        
        
    }
    int merge(vector<int>&nums,int left,int mid,int right)
    {                 ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);

        auto s1=mid-left+1;
        auto s2=right-mid;
        auto *leftArray=new int[s1];
        auto *rightArray=new int[s2];
        for(int i=0;i<s1;i++)
        {leftArray[i]=nums[left+i];
        }
        for(int j=0;j<s2;j++)
        {
            rightArray[j]=nums[mid+1+j];
        }
        int i1=0,i2=0,i3=left;
        int count=0, i=0,j=0;
        for(int i=0;i<s1;i++)
        {
            while(j<s2&&leftArray[i]>2LL*rightArray[j])
            {
                 j++;
            }
            count+=j;
        }
        while(i1<s1&&i2<s2)
        {
            if(leftArray[i1]<=rightArray[i2])
            {
                nums[i3]=leftArray[i1];
                i1++;
            }else
            {
                nums[i3]=rightArray[i2];
                i2++;
            }
            i3++;
        }
        while(i1<s1)
        {
            nums[i3]=leftArray[i1];
            i1++;
            i3++;
        }
        while(i2<s2)
        {
            nums[i3]=rightArray[i2];
            i2++;i3++;
        }
        return count;
    }
};