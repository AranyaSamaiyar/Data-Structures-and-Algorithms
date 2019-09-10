#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n, k, max =INT_MIN, t=0;
	cin>>n>>k;
	vector < pair <int, int> > v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i].first>>v[i].second;
	}
	for(int i=0;i<n;i++)
	{
		if(v[i].second>k)
		{
			t = v[i].first - (v[i].second-k);
		}
		else
			t = v[i].first;
		if(t>max)
		max = t;
	}
	cout<<max;
}
