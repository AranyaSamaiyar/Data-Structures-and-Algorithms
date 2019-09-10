#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n, m;
	cin>>n>>m;
	ll a[m];
	for(ll i=0;i<m;i++)
	cin>>a[i];
	ll s=0,i=1;
	s+=a[0]-1;
	while(i<m)
	{
		if(a[i]<a[i-1])
		s+=n-a[i-1]+a[i];
		else
		s+=a[i]-a[i-1];
		i++;
	}
	cout<<s;
}
