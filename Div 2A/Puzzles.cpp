#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector < int > v(m);
	for(int i=0;i<m;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int min = 10000;
	for(int i=0;i<m-n+1;i++)
	{
		if(min>(v[i+n-1]-v[i]))
		min = v[i+n-1]-v[i];
	}
	cout<<min;
}
