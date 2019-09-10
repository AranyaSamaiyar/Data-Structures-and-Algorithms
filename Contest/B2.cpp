#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	map < ll, ll> m;
	ll n,a,b,t=0,p;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>a>>b;
		m[a] = b;
		t+=b;
	}
	cin>>p;
	for(ll i=0;i<p;i++)
	{
		cin>>a>>b;
		if(m.find(a)!=m.end())
		{
			if(b>m[a])
			{
				t = t-m[a]+b;
				m[a] = b;
			}
		}
		else
		t+=b;
	}
	cout<<t;
	
	
}
