#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n, t;
	cin>>n>>t;
	ll a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	/*ll b[n];
	//b[n-1] = a[n-1];
	if(a[n-1]>t)
	{
		cout<<0;
		return 0;
	}
		if(a[n-1]==t)
		{
			cout<<(1);
			return 0;
		}
	for(int i=n-2;i>=0;i--)
	{
			b[i] = b[i+1] + a[i];
		if(b[i]>t)
		{
			cout<<(n-i-1);
			return 0;
		}
	
	}
	cout<<n;*/
	ll i=0, j=0, max =-1, sum=0, cnt=0;
	for(i=0;i<n;i++)
	{
		sum = 0, cnt=0;
		for(j=i;j<n&&sum<=t;j++)
		{
			sum+=a[j];
			cnt++;
		}
		if(sum>t){
		sum-=a[j];
		cnt-=1;	}
		if(cnt>max)
		max = cnt;
	}
	cout<<max;
	
}
