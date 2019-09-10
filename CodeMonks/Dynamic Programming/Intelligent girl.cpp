#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int cnt=0;
	for(int i=0;i<s.length();i++)
	{
		int a = s[i]-'0';
		if(a%2==0)
		cnt++;
	}
	vector < int > v(s.length());
	int f=0;
	for(int i=0;i<s.length();i++)
	{
		int a = s[i]-'0';
		if(a%2==0)
		{
			cnt--;
		}
		if(a%2==0)
		v[i] = cnt+1;
		else
		v[i] = cnt;
	}
	for(int i=0;i<s.length();i++)
	cout<<v[i];
}
