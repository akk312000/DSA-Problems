class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         if(nums2.size()>=1)
         {
              for(int i=0;i<nums1.size();i++)
        {
           
            nums2.push_back(nums1[i]);
        }
             sort(nums2.begin(),nums2.end());
             
             
         }
        
        if(nums2.size()>=1)
        {
        int size=nums2.size();
        if(size&1==1)
        {
            float ans=nums2[size/2];
            return ans;
        }
        else
        {
            double sum=0;
            sum+=(nums2[size/2]+nums2[(size/2)-1]);
            return sum/2;
        }
        }
        else
        {
            int no=nums1.size();
            if(no&1==1)
            {
                float ans=nums1[no/2];
                return ans;
            }
            else
            {
                float ans=nums1[no/2]+nums1[(no/2)-1];
                return ans/2;
            }
        }
    }
};