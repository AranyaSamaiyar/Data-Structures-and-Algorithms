#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, d,s=0;
	cin>>n>>d;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	if(s+(n-1)*10>d)
	{
		cout<<"-1";
		return 0;
	}
	cout<<(d-s)/5;
	
	
}
