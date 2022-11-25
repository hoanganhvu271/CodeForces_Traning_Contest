#include<bits/stdc++.h>

using namespace std;

int check(string s)
{
	
	int n = s.length();
	for(int i = 0; i< n; i++)
	{
		if(s[i] != 'Y' && s[i] != 'e' && s[i] != 's')
			return 0;
		if(i != n-1)
		{
			if(s[i] == 'Y' && s[i+1] != 'e')
				return 0;
			if(s[i] == 'e' && s[i+1] != 's')
				return 0;
			if(s[i] == 's' && s[i+1] != 'Y')
				return 0;
		}
	}
	return 1;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		if(check(s))
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
