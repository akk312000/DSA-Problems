class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
       int arr[numRows][numRows];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = 0;
		}
	}
	arr[0][0] = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}

		}


	}
        vector<vector<int>>vp;
	for (int i = 0; i < n; i++)
	{vector<int>temp;
		for (int j = 0; j < n; j++)
		{
			if(arr[i][j]!=0)
            {
                temp.push_back(arr[i][j]);
            }
		} vp.push_back(temp);
	}

        return vp;
    }
};