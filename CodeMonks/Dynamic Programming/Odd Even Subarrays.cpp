#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	ll mv=0;
	ll dp[n+1];
	fill(dp,dp+n+1,0);
	ll cntOdd =0, cntEven =0;
	for(ll i=0;i<n;i++)
	{
		
		if(a[i]%2==0)
		cntEven++;
		else
		cntOdd++;
		if(cntOdd==cntEven)
		dp[i+1] = dp[i]+1;
		else
		dp[i+1] = dp[i]; 
		//dp[i+1] = dp[i]+(cntOdd==cntEven)?1:0;
		cout<<cntEven<<" "<<cntOdd<<endl;
	}
	cout<<dp[n];
}
