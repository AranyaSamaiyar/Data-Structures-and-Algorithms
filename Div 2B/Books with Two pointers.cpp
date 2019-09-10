#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
	ll n, t;
	cin>>n>>t;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll c[n];
	c[0] = a[0];
	for(ll i=1;i<n;i++)
	{
		c[i] = c[i-1] + a[i];
	}
	ll b=0, e= n-1, ts = c[n-1], f=0;
	while(b<e)
	{
		if(ts<=t)
		{
			f=1;
			break;
		}
		else
		{
			if(a[b]>a[e])
			{
				ts-=a[b];
				b++;
			}
			else
			{
				ts-=a[e];
				e--;
			}
		}
	}
	if(b<e)
	cout<<e-b+1;
	else if(b==e)
	cout<<1;
	else
	cout<<0;
	
}
