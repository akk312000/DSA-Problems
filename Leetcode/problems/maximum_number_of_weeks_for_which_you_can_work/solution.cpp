class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
           long long  int maxElement=0;long long int n=milestones.size();
        long long int sum=0;
        for(int long long i=0;i<n;i++){
            sum+=milestones[i];
            if(milestones[i]>maxElement)
            {
                maxElement=milestones[i];
            }
        }
        long long int rest=sum-maxElement;
        return min(sum,2*rest+1);
    }
};