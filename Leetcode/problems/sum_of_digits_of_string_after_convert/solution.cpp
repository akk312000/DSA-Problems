#include<bits/stdc++.h>
class Solution {
public:
    int getLucky(string s, int k) {
      int n = s.size(); 
	string temp = ""; int nu = 0;
	// cout << nu << endl;
	// cout << n << endl;
	for (int i = 0; i < n; i++)
	{
		int x = s[i];
		int it = x - 96;
		string str = to_string(it);
		// cout << str << endl;
		temp += str;
		// temp.push_back(str);




	}
	// cout << temp;

	// myint1 = stoi(temp);

	for (int i = 0; i < k; i++)
	{
		temp = getanswer(temp);



	}
    int ans=stoi(temp);
	return ans;
        
    }
    string getanswer(string no)
{
	string newtemp = ""; int sum = 0;
	for (int i = 0; i < no.size(); i++)
	{
		int it = no[i] - 48;
		cerr << it << endl;
		sum += it;

	}
	cerr << sum << endl;
	string str = to_string(sum);
	// cout << endl << str << endl;
	return str;
}
    
};

