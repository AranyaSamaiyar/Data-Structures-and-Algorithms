#include<bits/stdc++.h>
using namespace std;
int luck(int n)
{
	int m=n, p=0,c=0;
	while(m!=0)
	{
		p = m%10;
		if(p==7||p==4)
		c++;
		m=m/10;
	}
	return c;
	
}
int main()
{
	int n, k, p=0,c=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		//p=0;
		p=luck(a[i]);
		if(p<=k)
		c++;
	}
	cout<<c;
}
