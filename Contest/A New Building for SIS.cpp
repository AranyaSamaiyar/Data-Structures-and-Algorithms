#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll n, h, a, b, k;
	cin>>n>>h>>a>>b>>k;
	vector < int > ans(k);
	ll ta, fa, tb, fb;
	for(ll i=0;i<k;i++)
	{
		cin>>ta>>fa>>tb>>fb;
		if(fa>=a&&fa<=b)
		{
			if(fb>=a&&fb<=b)
			ans[i] = abs(ta-tb) + abs(fa-fb);
			else
			ans[i] = abs(ta-tb) + abs(fa-fb);
		}
		else if(fb>=a&&fb<=b)
		{
			ans[i] = abs(ta-tb) + abs(fa-fb);
		}
		else
		{
		if((abs(a-fa)+abs(a-fb))<(abs(b-fa)+abs(b-fb)))
		{
			ans[i] = abs(a-fa)+abs(a-fb)+abs(ta-tb);
		}
		else
			ans[i] = abs(b-fa)+abs(b-fb)+abs(ta-tb);
	}}
	for(ll i=0;i<k;i++)
	cout<<ans[i]<<"\n";
	return 0;
}
