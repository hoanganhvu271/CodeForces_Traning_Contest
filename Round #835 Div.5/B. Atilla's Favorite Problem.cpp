#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		vector<char> vt;
		for(int i = 0; i< n; i++)
			vt.push_back(s[i]);
		
		sort(vt.begin(), vt.end());
		
//		for(int i = 0; i< n; i++)
//			cout << vt[i] << " ";
		
		cout << (int) vt[n-1] - 'a' + 1 << endl;
	}
}
