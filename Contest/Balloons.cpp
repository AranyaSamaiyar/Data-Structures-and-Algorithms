#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n], cu[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cu[0] = a[0];
	for(int i=1;i<n;i++)
	{
		cu[i] = cu[i-1] + a[i];
	}
	int f=1, cnt=0,k;
	for(int i=0;i<n-1;i++)
	{
		 k;
		if(cu[i]!=(cu[n-1]-cu[i]))
		{
			k=i;
			f=0;
		}
	}
	if(f==1)
	{
		cout<<"-1";
		return 0;
	}
	else
	{
		cout<<k+1<<"\n";
			for(int j=1;j<=k+1;j++)
			cout<<j<<" ";
			f=0;
			return 0;
	}
}

