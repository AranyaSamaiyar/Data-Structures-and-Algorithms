#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll GCD(ll a, ll b)
{
	if(b==0)
	return a;
	else
	return GCD(b,a%b);
}
bool coprime(ll a, ll b)
{
	if(GCD(a,b)==1)
	return true;
	else
	return false;
}
int main()
{
	ll l , r;
	cin>>l>>r;
	for(ll i=l;i<r;i++)
	{
		for(ll j=i+1;j<r;j++)
		{
			if(coprime(i,j))
			{
				for(ll k=j+1;k<=r;k++)
				{
					if(coprime(j,k))
					if(!(coprime(i,k)))
					{
						cout<<i<<" "<<j<<" "<<k;
						return 0;
					}
				}
			}
		}
	}
	cout<<"-1";
	
}
