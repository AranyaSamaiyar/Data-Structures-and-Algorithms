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
	int min = 0, max = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<=a[min])
		min = i;
		if(a[i]>a[max])
		max = i;
	}
	if(max<min)
	{
		cout<<abs(max) + abs(n-min-1);
	}
	else if(max>min)
	{
		cout<<abs(max) + abs(n-min-1)-1;
	}
	else
	cout<<"0";
	
}
