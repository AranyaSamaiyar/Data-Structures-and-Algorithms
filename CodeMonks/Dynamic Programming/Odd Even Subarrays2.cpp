#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	ll differ = 0, ans=0;
	ll hashp[n+1] = {0};
	ll hashn[n+1] = {0};
	hashp[0] = 1;
	for(ll i=0;i<n;i++)
	{
		if(a[i]&1==1)
		differ++;
		else
		differ--;
		
		if(differ<0)
		{
			ans+=hashn[-differ];
			hashn[-differ]++;
		}
		else
		{
			ans+=hashp[differ];
			hashp[differ]++;
		}
		
	}
	cout<<ans;
}

