
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--)
	{
        int l, r, x, a, b;
        cin >> l >> r >> x;
        cin >> a >> b;
        int d1 = abs(a-l);
        int d2 = abs(r-a);
        int d3 = abs(b-l);
        int d4 = abs(r-b);
        if(a == b)
        cout<<0<<endl;
        else if(abs(a-b) >= x)
            cout<<1<<endl;
            
        else if((d1<x && d2<x) || (d3<x && d4<x))
        
        	cout<<-1<<endl;
        	
        else
		{
            if(d1 < x)
			{
                if(d4 >= x)
                	cout<<2<<endl;
                else
                	cout<<3<<endl;
            }
            else if(d2 < x)
			{
                if(d3 >= x)
                	cout<<2<<endl;
            else
                cout<<3<<endl;
            }
            else
			{
                cout<<2<<endl;
            }
        }
    }
}
