class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
       map<char, string>mp;
	int n = digits.size();
	mp['2'] = "abc";
	mp['3'] = "def";
	mp['4'] = "ghi";
	mp['5'] = "jkl";
	mp['6'] = "mno";
	mp['7'] = "pqrs";
	mp['8'] = "tuv";
	mp['9'] = "wxyz";
	// cout << digits.size();
	if (digits.size() == 4)
	{
		string a = mp[digits[0]];
		string b = mp[digits[1]];
		string c = mp[digits[2]];
		string d = mp[digits[3]];
		cout << a << endl << b << endl << c << endl << d << endl;
		vector<string>vp;
		for (int i = 0; i < a.size(); i++)
		{
			for (int j = 0; j < b.size(); j++)
			{
				for (int k = 0; k < c.size(); k++)
				{
					for (int l = 0; l < d.size(); l++)
					{
						string temp = "";
						temp.push_back(a[i]);
						temp.push_back(b[j]);
						temp.push_back(c[k]);
						temp.push_back(d[l]);
						vp.push_back(temp);
					}
				}
			}
		}
		return vp;
	}
	else if (n == 3)
	{
		string a = mp[digits[0]];
		string b = mp[digits[1]];
		string c = mp[digits[2]];
		
		vector<string>vp;
		for (int i = 0; i < a.size(); i++)
		{
			for (int j = 0; j < b.size(); j++)
			{
				for (int k = 0; k < c.size(); k++)
				{	string temp = "";
					temp.push_back(a[i]);
					temp.push_back(b[j]);
					temp.push_back(c[k]);

					vp.push_back(temp);

				}
			}
		}
		return vp;
	}
	else if (n == 2)
	{
		string a = mp[digits[0]];
		string b = mp[digits[1]];


		vector<string>vp;
		for (int i = 0; i < a.size(); i++)
		{
			for (int j = 0; j < b.size(); j++)
			{	string temp = "";
				temp.push_back(a[i]);
				temp.push_back(b[j]);

				vp.push_back(temp);

			}
		}
		return vp;
	}
	else if (n == 1)
	{
		string a = mp[digits[0]];



		vector<string>vp;
		for (int i = 0; i < a.size(); i++)
		{	string temp = "";
			temp.push_back(a[i]);


			vp.push_back(temp);

		}
		return vp;
	}
	else
	{	vector<string>vp;
     return vp;
    }}
};