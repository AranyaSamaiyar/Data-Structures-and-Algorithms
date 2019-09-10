#include<bits/stdc++.h>
using namespace std;
int diff(int a[], int i,int n)
{
	int d, max=0;
	for(int j=0;j<n-1;j++)
	{
		if(j==i-1)
		{
			d = a[i+1] - a[i-1];
		}
		else if(j==i)
		{
			d = a[i+1] - a[i-1];
		}
		else
		{
			d = a[j+1] - a[j];
		}
		if(d>max)
		max = d;
	}
	return max;
}
int main()
{
	int n;
	cin>>n;
	int v[n];
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int d;
	int min = 1000000;
	for(int i=1;i<n-1;i++)
	{
		d  = diff(v,i,n);
		if(d<min)
		min = d;
		
	}
	
	cout<<min;
}
