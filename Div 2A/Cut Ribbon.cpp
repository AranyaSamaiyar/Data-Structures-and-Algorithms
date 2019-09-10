#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int v[] = {a,b,c};
	int T[4][n+1];
	for(int i=0;i<4;i++)
	T[i][0] = 0;
	for(int i=0;i<n+1;i++)
	T[0][i] = 0;
	for(int i=1;i<4;i++)
	{
		for(int j=1;j<n+1;j++)
		{
			if(j<v[i-1])
			T[i][j] = T[i-1][j];
			else
			{
				if((j-v[i-1])==0||(T[i][j-v[i-1]]>0))
					T[i][j] = max(T[i-1][j],1+T[i][j-v[i-1]]);
				else
					T[i][j] = T[i-1][j];
			}
		
		}
	}
	cout<<T[3][n];
}
