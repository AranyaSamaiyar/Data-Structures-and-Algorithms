#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n, l;
	cin>>n>>l;
	double d, maxd = -1, maxo,maxe;
	vector < double > v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n-1;i++)
	{
		d = v[i+1] - v[i];
		if(maxd<d)
		maxd = d;
	}
	if(v[0]!=0)
	maxo = v[0];
	if(v[n-1]!=l)
	maxe = l - v[n-1];
	double dd = max((maxd/2),max(maxo,maxe));
/*	if(dd == maxd/2)
	cout<<maxd<<" 1"<<" ";
	if(dd==maxo)
	cout<<maxo<<" 2"<<" ";
	if(dd==maxe)
	cout<<maxe<<" 3"<<" ";*/
	printf("%f",dd);
}
