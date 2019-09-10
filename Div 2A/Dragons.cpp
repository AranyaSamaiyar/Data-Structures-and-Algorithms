#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s, n, str;
	cin>>s>>n;
	vector < pair <int, int > > v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i].first>>v[i].second;
	} 
	sort(v.begin(),v.end());
	str =s;
	for(int i=0;i<n;i++)
	{
		if(str>v[i].first)
		{
			str+=v[i].second;
			}	
		else
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}
