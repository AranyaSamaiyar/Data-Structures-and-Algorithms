#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll n, i;
	cin>>n;
	vector < int > a;
	for(i=0;i<n;i++)
	{	
	ll a, b;
		cin>>a>>b;
		if(b==0)
		a.push_back((double)(1));
		else
		a.push_back((double)(a/(a+b)));
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<"\n";
	
	
}
