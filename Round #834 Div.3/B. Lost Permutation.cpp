#include<bits/stdc++.h>

using namespace std;

int check1(int a[], int n, int max, int sum, int tong)
{
		
	if(n == 1 && max == 1)
	{
		max = max + 1;
		while((sum - max) >= 0)
		{
			sum -= max;
			max++;
		}
		
		if(sum == 0)
			return 1;
		else 
			return 0;
	}
	else
	{
		int tmp = max * (max + 1) / 2;
	
		if((tmp - tong) > sum)
			return 0;
		else
		{
			sum = sum - tmp + tong;
				
			max = max + 1;
			while((sum - max) >= 0)
			{
				sum -= max;
				max++;
			}
		
			if(sum == 0)
				return 1;
			else 
				return 0;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, sum;
		cin >> n >> sum;
		int a[n];
		int max = -1, check = 1, tong = 0;
		map<int, int> mp;
		
		for(int i = 0; i< n; i++)
		{
			cin >> a[i];
			tong += a[i];
			mp[a[i]]++;
	
			if(mp[a[i]] > 1)
				check = 0;
				
			if(max < a[i])
				max = a[i];
		}
		
//		cout << check << endl;
		
		if(check == 0)
			cout << "NO" << endl;
		else 
		{
			if(check1(a, n, max, sum, tong))
				cout << "YES" << endl;
			else 
				cout << "NO" << endl;	
		}
	}
}
