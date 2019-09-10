#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int c =0 ;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c=0;
			//if(a[i][j]=='o')
			//{
				if(i-1>=0&&a[i-1][j]=='o')
				{
					c++;
					//a[i-1][j] = 'e';
				//	cout<<i-1<<" "<<j<<"1"<<endl;
				}
				if(i+1<n&&a[i+1][j]=='o')
				{
					c++;
				//	a[i+1][j] = 'e';
					//	cout<<i+1<<" "<<j<<"2"<<endl;
				}
				if(j-1>=0&&a[i][j-1]=='o')
				{
					c++;
				//	a[i][j-1] = 'e';
					//	cout<<i<<" "<<j-1<<"3"<<endl;
				}
				if(j+1<n&&a[i][j+1]=='o')
				{
					c++;
				//	a[i][j+1] = 'e';
					//	cout<<i<<" "<<j+1<<"4"<<endl;
				}
			
			if(c%2!=0)
			{
				
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
	
}
