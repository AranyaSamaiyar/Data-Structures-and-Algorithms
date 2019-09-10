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
		{
			if(i%2==0)
			cout<<"#";
			else
			{	if(((i+1)/2)%2!=0){
				if(j==m-1)
				cout<<"#";
				else
				cout<<".";}
			else
				{
				if(j==0)
				cout<<"#";
				else
				cout<<".";
				}
			}
		}
		cout<<"\n";
	}
}
