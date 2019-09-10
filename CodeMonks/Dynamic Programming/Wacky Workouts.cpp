#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
//int namespace std;
//ll M = 1000000;
//ll F[1000000];
ll N = 1000000007;
ll Fib(ll n)
{	
	ll a=1, b=2, c;
	if(n<2)
	return n+1;
	else 
	{
		for(ll i=2;i<=n;i++)
		{
			c = (a%N+b%N)%N;
			a=b%N;
			b=c%N;
		}
		return c;
	}
	//return F[n];
}
int main()
{
//	fill(F,F+M,0);
	ll n;
	ll v[n];
	cin>>n;
	for(ll i=0;i<n;i++)
	{	ll a;
		cin>>a;
		v[i] = Fib(a);
	}
	for(ll i=0;i<n;i++)
	cout<<v[i]<<"\n";
	
}
