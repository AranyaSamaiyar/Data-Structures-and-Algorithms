#include<bits/stdc++.h>
using namespace std;
int Height(int i, int n, int a[])
{
	int max=0,sub_h=0;
	for(int j=0;j<n;j++)
	{
		if(a[j]==i)
		sub_h = Height(j,n,a);
		if(sub_h>max)
		max = sub_h;
	}
	return 1+max;
}
int main()
{
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	if(a[i]==-1)
	k = i;
	cout<<Height(k,n,a); 
	return 0;
}
