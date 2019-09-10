#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	string s1,s2;
	cin>>n>>m;
	string s[n];
	map < string, string> mp;
	for(int i=0;i<m;i++)
	{
		cin>>s1>>s2;
		mp[s1] = s2;
	}
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(int i=0;i<n;i++)
	{
		if(s[i].length()<=mp[s[i]].length())
		cout<<s[i]<<" ";
		else
		cout<<mp[s[i]]<<" ";
	}
}
