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
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<n;i++)
		{
			if(j+1==a[i])
			cout<<i+1<<" ";
		}
	}
}
