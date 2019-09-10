#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, s, t, cnt=0;
	cin>>n>>s>>t;
	int r_a[n], a[n], ab[n];
	for(int i=0;i<n;i++)
	{
		cin>>r_a[i];
		ab[i] = i+1;
	}
		if(ab[t-1]==s)
		{
			cout<<cnt;
			return 0;
		}
	//for(int i=0;i<n;i++)
	//cout<<ab[i]<<" ";
	for(int i=0;i<n-1;i++)
	{
		cnt++;
		if(r_a[s-1]==t)
		{
			cout<<cnt;
			return 0;
		}
		else
			s = r_a[s-1];
	/*	for(int j=0;j<n;j++)
		{
			a[r_a[j]-1] = ab[j];
			
		}
		for(int j=0;j<n;j++)
		{
			ab[j] = a[j];
		}*/
		
		/*for(int j=0;j<n;j++)
		{
			cout<<ab[j]<<" ";
		}
		cout<<"\n";*/
		
		/*if(ab[t-1]==s)
		{
			cout<<cnt;
			return 0;
		}*/
	}
	cout<<"-1";
}
