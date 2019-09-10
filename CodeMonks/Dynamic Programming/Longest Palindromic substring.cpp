#include<bits/stdc++.h>
using namespace std;
int main()
{
	bool prime[100000];
	memset(prime, true, sizeof(prime));
	prime[0] = false;
	prime[1] = false;
	for(int i=2;i*i<=100000;i++)
	{
		if(prime[i])
		for(int j=i*i;j<100000;j+=i)
		{
			prime[j] = false;
		}
	}
	int t;
	cin>>t;
	int prim[t];
	for(int i=0;i<t;i++)
	{
		string s;
		cin>>s;
		int N = s.size();
		
		int dp[N+1][N+1];
		bool P[N+1][N+1];
		memset(P,false,sizeof(P));
		memset(dp, 0, sizeof(dp));
		for(int j=0;j<N;j++)
		{
			dp[j][j] = 1;
			P[j][j] = true;
		}
		for(int j=0;j<N-1;j++)
		{
			if(s[j]==s[j+1])
			{
				dp[j][j+1] = 2;
				P[j][j+1] = true;
				//cout<<"hello"<<j<<" "<<j+1<<endl;
			}
			else
			{
				dp[j][j+1] = 1;
			}
		}
		for(int L=3;L<=N;L++){
		for(int j=0;j<N;j++)
		{
			
			int k = L+j-1;
			if(k>=N)
			break;
			//if(j==1&&k==2)
			//cout<<"hi"<<endl;
			dp[j][k] = max(dp[j+1][k],dp[j][k-1]);
			
			if(s[j]==s[k]&&P[j+1][k-1])
			{
				dp[j][k] =dp[j+1][k-1]+2; ;
				P[j][k]=true;
			}
		}}
		
		/*for(int j=0;j<N;j++)
		{
			for(int k=0;k<N;k++)
			cout<<dp[j][k];
			cout<<"\n";
		}*/
		//cout<<dp[0][N-1];
		if(prime[dp[0][N-1]])
		prim[i] = 1;
		else
		prim[i] = 0;
	}
	for(int i=0;i<t;i++)
	{
		if(prim[i]==1)
		cout<<"PRIME\n";
		else
		cout<<"NOT PRIME\n";
	}
	
}
