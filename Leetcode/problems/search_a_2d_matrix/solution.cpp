class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ind=0;
        vector<int>vp;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            vp.push_back(matrix[i][m-1]);
        }
        int start=0,end=n-1;
     while (start <= end)
	{
		int mid = (start + end) / 2;


		if (vp[mid] == target)
		{
			return true;
		}
		else if (target > vp[mid])
		{
			start = mid + 1;
		}
		else if (target < vp[mid])
		{
			end = mid - 1;
		}

	}
        if(start==n)
        {
            return false;
        }
        if(binary_search(matrix[start].begin(),matrix[start].end(),target))
        {
            return true;
        }
        else
            return false;
    }
};