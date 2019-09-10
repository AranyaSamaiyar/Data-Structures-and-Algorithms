#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin>>n>>m;
	int a[n][m], b[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		cin>>b[i][j];
	}
	for(int i =0;i<n;i++)
		for(int j=0;j<m;j++)
			a[i][j] = 1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			
			if(b[i][j]==0)
			{
				for(int k=0;k<n;k++)
					a[k][j] = 0;
				for(int k=0;k<m;k++)
					a[i][k] = 0;
			}
		}
	}
	int orn[n] = {0}, orm[m] = {0};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			orn[i] = (orn[i]|a[i][j]);
		}
	}
	for(int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			orm[j] = (orm[j]|a[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(b[i][j]!=(orn[i]|orm[j]))
			{
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES"<<"\n";
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		cout<<a[i][j]<<" ";
		cout<<"\n";
	}
}
