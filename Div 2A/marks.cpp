#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
ll tada(string a[], ll n, ll m)
{
	ll b[n],c=0;
	for(ll i=0;i<n;i++)
	b[i] =0 ;
	for(ll i=0;i<m;i++)
	{
		ll p, max=-1;
		for(ll j=0;j<n;j++)
		{
			p = int(a[j][i]-'0');
			if(max<=p)
			{
				max = p;
			}
		}
		for(ll j=0;j<n;j++)
		{
			if(max==int(a[j][i]-'0'))
			b[j]+=1;
		}
		
	}
	for(ll j=0;j<n;j++)
	{
		if(b[j]>=1)
		c++;
	}
	return c;
}
int main()
{
	ll n, m;
	cin>>n>>m;
	string a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	cout<<tada(a,n,m);
	//cout<<x;
}
