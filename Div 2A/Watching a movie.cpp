#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, x;
	cin>>n>>x;
	int a[n], b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	int i=0, cnt=0,t=1;
	while(t<=b[n-1])
	{
		while(t+x<=a[i])
		{
			t+=x;
		}
		cnt+=(b[i]-t+1);
		t = b[i]+1;
		i++;
	}
	cout<<cnt;
}
