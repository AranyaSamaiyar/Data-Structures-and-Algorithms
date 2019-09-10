#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0;
	vector < int > v;
	char s[100];
	cin>>s;
	while(s[i]!='\0')
	{
		if(s[i]!='+')
		v.push_back((int)s[i]);
		i++;
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		if(i!=v.size()-1)
		cout<<v[i]-'0'<<"+";
		else
		cout<<v[i]-'0';
	}
	return 0;
}
