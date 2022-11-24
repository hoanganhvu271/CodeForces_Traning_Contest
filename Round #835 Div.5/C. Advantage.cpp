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
		int max1 = -1, max2 = -2;
		for(int i = 0; i< n; i++)
		{
			cin >> a[i];
			if(a[i] >= max1)
			{
				max2 = max1;
				max1 = a[i];
			}
			else if(a[i] > max2 && a[i] < max1)
				max2 = a[i];
		}
		
//		cout << max1 << " " << max2 << endl;

		for(int i = 0; i< n; i++)
		{
			if(a[i] == max1)
				cout << max1 - max2 << " ";
			else cout << a[i] - max1 << " ";
		}
		
		cout << endl;
	}
}
