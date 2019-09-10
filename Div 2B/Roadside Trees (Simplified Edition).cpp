#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, cnt=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cnt+=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i-1]>a[i])
		cnt+=(a[i-1]-a[i])+1;
		else
		cnt+=(a[i]-a[i-1])+1;
	}
	cnt+=n;
	cout<<cnt;
}
