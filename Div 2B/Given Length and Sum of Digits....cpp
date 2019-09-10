#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll m, s;
	cin>>m>>s;
	if(s==0)
	{
		if(m==1)
		{
			cout<<"0 0";
		}
		else
		{
			cout<<"-1 -1";
		}
		return 0;
	}
	else
	{
	
		if((9*m)<s)
		{
			cout<<"-1 -1";
			return 0;
		}
		else
		{
			ll n=0, sc =s;
			for(ll i=0;i<(s/9);i++)
			{
				n = n*10+9;
				m--;
				sc = sc-9;
			}
			n = n*10+sc;
			m--;
			if(m>0)
			n = n*pow(10,m);
			ll q=0;
			if(m>0)
			q = sc*pow(10,m);
			else
			q = sc;
			for(ll i=0;i<(s/9);i++)
			{
				q = q*10+9;
			}
			cout<<q<<" "<<n;
		}
	}
}
