#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n, m, b, p=0, q=0, r=0;
	cin>>n>>m;
	if(m==0)
	{
		cout<<"YES";
		return 0;
	}
	//ll a[n] = {0};
	vector < ll > v(m);
	//fill(a.begin(),a.end(),0);
	for(ll i=0;i<m;i++)
	{
		cin>>v[i];
	}
	//for(ll i=0;i<n;i++)
	//cout<<a[i]<<" ";
	//cout<<"\n";
	
	sort(v.begin(),v.end());
	if(v[0]==1||v[m-1]==n)
	{
		cout<<"NO";
		return 0;
	}
	for(ll i =0;i<m;i++)
	{
		r = q;
		q = p;
		p = v[i];
		if((p==q+1)&&(q==r+1))
		{
			cout<<"NO";
			return 0;
		}
	}
	/*
	for(int i=0;i<m;i++)
	cout<<v[i]<<" ";
	cout<<"\n";
	for(ll i=0;i<m;i++){
			if(v[i]<n-1)
			if(a[v[i]]==1 && a[v[i]+1]==1)
			{
				cout<<"NO";
				return 0;
			}
		
	}*/
	cout<<"YES";
	return 0;
}
