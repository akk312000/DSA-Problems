class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return countPairs(nums,0,n-1);
        
        
    }
    int countPairs(vector<int>&nums,int start,int end)
    {
        if(start>=end)return 0;
        
        int mid=(start+end)/2;
        int count1=countPairs(nums,start,mid);
        int count2=countPairs(nums,mid+1,end);
        int count3=merge(nums,start,mid,end);
        return count1+count2+count3;
        
    }
   int merge(vector<int>&nums, int const left, int const mid, int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
 
    // Create temp numss
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
 
    // Copy data to temp numss leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = nums[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = nums[mid + 1 + j];
 // int count=0;
    auto indexOfSubArrayOne = 0, // Initial index of first sub-nums
        indexOfSubArrayTwo = 0; // Initial index of second sub-nums
    int indexOfMergedArray = left; // Initial index of merged nums
 int count=0;int i=0,j=0;
     for(int i=0;i<subArrayOne;i++)
     {
         while(j<subArrayTwo&&leftArray[i]>2LL*rightArray[j])
         {
             j++;
         }
         count+=(j);
         
     }
    // Merge the temp numss back into nums[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
       
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            nums[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            nums[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        nums[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
       
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        nums[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++; 
    }
       return count;
}
};