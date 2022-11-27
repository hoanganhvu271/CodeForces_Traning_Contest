#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		string tmp = s;
		reverse(s.begin(), s.end());
		
		cout <<tmp << s << endl;
	}
}
