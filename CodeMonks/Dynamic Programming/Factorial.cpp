#include<bits/stdc++.h>
using namespace std;
long long int mod = 1000000000+7;
long long int d[1000000];
long long int fact(int n)
{
	if(d[n]!=0)
	return d[n];
	else
	{
		d[n] = ((d[n-1]%mod)*(n%mod))%mod;
		return d[n];
	}
}
int main()
{
	fill(d,d+1000000,0);
	d[0]=1;d[1]=1;
	long long int n, m;
	cin>>n;
	long long int a[n],i;
	for(i=0;i<n;i++)
	{
		cin>>m;
		a[i] = fact(m);
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<"\n";
}
