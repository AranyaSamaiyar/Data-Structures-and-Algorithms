#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	bool prime[n+1];
	fill(prime,prime+n+1,true);
	for(int i=2;i*i<=n;i++)
	{	
		if(prime[i]==true)
		for(int j=i*i;j<=n;j+=i)
		{
			prime[j]=false;
		}
	}
	int m;
	for(int i=1;i<=n;i++)
	{
		if(prime[i])
		m =i;
	}
	int cnt=0, maxx=-1;
	for(int i=0;i<n-m+1;i++){
		cnt =0;
		for(int j=i;j<i+m;j++)
		cnt+=a[j];
		maxx = max(maxx,cnt);}
	cout<<maxx;
}
