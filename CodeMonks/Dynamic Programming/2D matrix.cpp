#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		cin>>a[i][j];
	}
	int T[n+1][m+1];
	for(int i=0;i<n+1;i++)
	T[i][0] = 0;
	for(int j=0;j<m+1;j++)
	T[0][j] = 0;
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<m+1;j++)
		{
			T[i][j] = T[i-1][j] + T[i][j-1] + a[i-1][j-1] - T[i-1][j-1];
		}
	}
	int q,x,y;
	cin>>q;
	int ans[q];
	for(int i=0;i<q;i++)
	{
		cin>>x>>y;
		ans[i] = T[x][y];
	}
	for(int i=0;i<q;i++)
	cout<<ans[i]<<"\n";
}
