#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll arr[n+1];
	arr[0] = 0;
	for(ll i=1;i<=n;i++)
	cin>>arr[i];
	
	ll a[n+1];
	a[0] = 0;
	ll st, f=0;
	for(ll i=1;i<n;i++)
	{
		if(arr[i]>arr[i+1])
		{
			st = arr[i+1];
			f=1;
		}
	}
	if(f==0)
	for(ll i=1;i<=n;i++)
	cout<<arr[i]<<" ";
	else
	for(ll i=1;i<=n;i++)
	{
		if(arr[i]==i)
		cout<<i<<" ";
		else if(i<=st)
		cout<<st<<" ";
		else
		cout<<i<<" ";
	}
	
}
