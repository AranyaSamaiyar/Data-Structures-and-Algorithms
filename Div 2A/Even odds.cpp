#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll mid = (n%2==0)?n/2:(n+1)/2;
	if(k<=mid)
	{
		cout<<2*k-1;
	}
	else
	{
		cout<<2*(k-mid);
	}
	return 0;
}
