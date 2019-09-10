#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
//	if(n==1)
//	cout<<"YES";
	char a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cin>>a[i][j];
	}
	char x = a[0][0];
	char c = a[0][1];
	if(x==c)
	{
		cout<<"NO";
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				if(a[i][j]!=x)
				{
					cout<<"NO";
					return 0;
				}
			}
			else if(i+j==n-1)
			{
				if(a[i][j]!=x)
				{
					cout<<"NO";
					return 0;
				}
			}
			else
			{
				if(a[i][j]!=c){
					cout<<"NO";
					return 0;
				}
			}
		}
	}
	cout<<"YES";
	return 0;
}
