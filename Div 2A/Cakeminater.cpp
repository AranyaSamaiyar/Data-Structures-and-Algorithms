#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int r,c;
	cin>>r>>c;
	char a[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	int f=1, cnt= 0, d=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++){
			if(a[i][j]=='S')
			{
				f = 0;
			}
		}
		if(f==1)
		{
			cnt+=c;
			d++;
		}
		f=1;
	}
	f=1;
	for(int j=0;j<c;j++)
	{
		for(int i=0;i<r;i++){
			if(a[i][j]=='S')
			{
				f = 0;
			}
		}
		if(f==1)
		{
			cnt+=r-d;
		}
		f=1;
	}
	cout<<cnt;
}
