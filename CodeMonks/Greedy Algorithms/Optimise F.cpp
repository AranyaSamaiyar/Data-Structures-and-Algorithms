#include<bits/stdc++.h>
using namespace std;
int optimum(int p[], int t[], int n)
{
	int C=0, F=0;
	vector< pair <int,int> > s;
	for(int i=0;i<n;i++)
	{
		s.push_back( make_pair(p[i]/t[i],i));
	}
	sort(s.begin(), s.end());
	for(int i=0;i<n;i++)
	{
		C = C + t[s[i].second];
		F = F + p[s[i].second]*C;
	}
	return F;
}
int main()
{
	int p[] = {3, 1};
	int t[] = {5, 2};
	int n=2;
	cout<<optimum(p,t,n);
	return 0; 
}
