#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int color[N];
	for(int i=0;i<N;i++)
	cin>>color[i];
	int cost[N][N];
	memset(cost, 0, sizeof(cost));
	for(int i=0;i<N;i++)
	cost[i][i] = 1;
	
	for(int L=2;L<=N;L++)
		{
			for(int i=0;i<N;i++)
			{	
				int j = L+i-1;
				if(j>=N)
				break;
				if(color[i]==color[j])
				cost[i][j] = cost[i+1][j-1];
				else
				cost[i][j] = min(cost[i+1][j],cost[i][j-1])+1;
			}
		}
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
			cout<<cost[i][j]<<" ";
		cout<<"\n";
		}
		cout<<cost[0][N-1];
}
