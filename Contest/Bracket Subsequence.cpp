#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n, k;
	cin>>n>>k;
	string b;
	cin>>b;
	if(n==k)
	{
		cout<<b;
		return 0;
	}
	else
	{
		ll i = 0, cnt1=0, cnt2=0, v=0;
		while(i<k)
		{
			if(b[i]=='(')
			cnt1++;
			else
			cnt2++;
			i++;
			if(cnt1==cnt2)
			v = i;
		}
		if(cnt1==cnt2)
		{
			for(ll i=0;i<k;i++)
			cout<<b[i];
			return 0;
		}
		else
		{
			//cout<<v<<" ";
			if(v==0)
			{
				for(ll i=n-k-1;i<k+1;i++)
				cout<<b[i];
				return 0;
			}
			for(ll i=0;i<v;i++)
			cout<<b[i];
			ll p=0;
			for(ll j=v+1;j<k;j++)
			{
				if(p%2==0)
				cout<<"()";
				p++;
			}
		}
	}
	
}
