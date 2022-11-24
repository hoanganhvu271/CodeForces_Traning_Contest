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
		int a[n];
		for(int i = 0; i< n; i++)
			cin >> a[i];
		
		int check = 1;
		for(int i =0 ; i < n-1 and check == 1 ; i++)
		{
			if(a[i] < a[i+1])
			{
				check = 0;
				while(a[i] <= a[i+1] and i < n - 1)
				{
					i++;
				}
				
				if(i == n-1)
				{
					cout << "YES" << endl;
					break;
				}
				else cout << "NO" << endl;
			}
		
		}
		
		if(check == 1)
			cout << "YES" << endl;
	}
}
