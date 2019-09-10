#include<bits/stdc++.h>
using namespace std;
vector < int > a;
int sum(int l,int r)
{
	int s=0;
	for(int i=l;i<=r;i++)
	{
		s+=a[i];
	}
	return s;
}
int main()
{
	int n;
	cin>>n;
	int p[n];
	int m;
	for(int i=0;i<n;i++)
	{
		cin>>m;	
		a.push_back(m);
	}
	sort(a.begin(),a.end());
	//for(int i=0;i<n;i++)
	//cout<<a[i];
	for(int i=n-1;i>=0;i--)
	{
		p[n-1-i] = a[i]; 
	}
	for(int i=0;i<n;i++)
	{
		a[i] = p[i]; 
	//	cout<<a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(sum(0,i)>sum(i+1,n-1)){
		cout<<i+1;
		return 0;}
	}
	
}
