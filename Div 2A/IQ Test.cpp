#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(((a[0]%2)+(a[n-1]%2))%2!=0)
	{
		if(((a[0]%2)+(a[1]%2))%2!=0)
		cout<<1;
		else
		cout<<n;
		return 0;
	}
	int b = a[0]%2;
	for(int i=0;i<n;i++)
	{
		if((a[i]%2)!=b)
		{
			cout<<i+1;
			return 0;
		}
	}
}
