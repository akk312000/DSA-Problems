class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int n=arr.size();bool found=false;
        if(n==1)
        {
            return arr;
        }   int ind = n-1-1;
        
        while(ind>=0){
            if(arr[ind]>arr[ind+1]){
                break;
            }
            ind--;
        }
        if(ind<0)
            return arr;
      
        int maxi=INT_MIN;
       int newind;
        for(int i=ind+1;i<n;i++)
        {
            if(arr[i]<arr[ind]&&arr[i]>maxi)
            {
                  maxi=arr[i];
                    newind=i;
                
            }
        }
        cout<<arr[ind]<<" "<<arr[newind]<<endl;
        swap(arr[ind],arr[newind]);
        return arr;
    }
};