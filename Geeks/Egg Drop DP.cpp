#include<bits/stdc++.h>
using namespace std;
int eggDrop(int n, int k)
{
	int eggFloor[n+1][k+1];
	
	for(int i=1;i<=n;i++)
	{
		eggFloor[i][0] = 0;
		eggFloor[i][1] = 1;
	}
	for(int i=1;i<=k;i++)
	eggFloor[1][i] = i;
	
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=k;j++)
		{
			eggFloor[i][j] = INT_MAX;
			for(int x=2;x<=k;x++)
			{
				eggFloor[i][j] = min(eggFloor[i][j],1+max(eggFloor[i-1][x-1],eggFloor[i][j-x]));
			}
		}
		
	  }  
	  
	  return eggFloor[n][k];
}
using namespace std;
int main()
{
	int n, k;
	cin>>n>>k;
	cout<<eggDrop(n,k);
}
