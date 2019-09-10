#include<bits/stdc++.h>
typedef long long int ll ;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		ll n;
		cin>>n;
		ll m=2*n;
		vector < pair <int, int> > v(m);
		ll k=0;
		for(ll j=0;j<n;j++)
		{	
			ll a, b;
			cin>>a>>b;
			v[k].first = a; v[k].second = 0;
			k++;
			v[k].first = b-1; v[k].second = 1;
			k++;
		}
		sort(v.begin(),v.end());
		ll mv = -1, cnt=0;
		for(ll k=0;k<v.size();k++)
		{
			if(v[k].second==0)
			cnt++;
			else
			cnt--;
			mv = max(mv,cnt);
		}
		cout<<mv<<"\n";
	}
}
