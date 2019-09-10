#include<bits/stdc++.h>
using namespace std;
void merge(int a, int b, vector< pair <int, int> > &v)
{
	if(a==b){
	//	cout<<a<<" "<<b<<endl;
	}
	else
	{
	//	cout<<"hey";
		int i = a-1, j = b-1;
	//	cout<<i<<" "<<j;
		while(i!=v[i].second)
		{
			i=v[i].second;
		}
		while(j!=v[j].second)
		{
			j=v[j].second;
		}
		if(i!=j){
		//	cout<<i<<" "<<j," ";
		v[i].first+=v[j].first;
	//	cout<<v[i].first<<" ";
		v[j].first=0;
		v[j].second  = i;}
		
	}
	int m = v[0].first;
	for(int i=0;i<v.size();i++)
	{
		if(m<v[i].first)
		m = v[i].first;
	}
	cout<<m<<endl;
	
}
//void max(vector < pair < int, int> > &v)

int main()
{
	int n,m;
	cin>>n>>m;
	int p,q;
	vector< pair < int, int> > ii(m);
	vector < pair < int, int > > v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i].first;
		v[i].second = i;
	//	v.push_back(make_pair(p,i));
	}
	for(int i=0;i<m;i++)
	{
		cin>>ii[i].first>>ii[i].second;
	}
	
	for(int i=0;i<m;i++)
	{
		//cout<<ii[i].first<<" "<<ii[i].second<<endl;
		merge(ii[i].first,ii[i].second,v);
	//	max(v);
	}
}
