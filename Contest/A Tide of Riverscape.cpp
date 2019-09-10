#include<bits/stdc++.h>
using namespace std;
char other(char i)
{
	if(i=='0')
	return '1';
	else
	return '0';
}
int main()
{
	int n, p,k=0,f=0;
	cin>>n>>p;
	string s, sc;
	cin>>s;
	sc = s;
	for(int i=0;i<(s.length()-p);i++)
	{
		if(s[i]!=s[i+p]||(s[i]=='.'&&s[i+p]=='.'))
		{
			if(s[i]=='.'&&s[i+p]=='.')
			{sc[i] = '0';
			sc[i+p] = '1';
			}
			else if(s[i]=='.')
			{
				sc[i] = other(s[i+p]); 
			}
			else if(s[i+p]=='.')
			{
				sc[i+p] = other(s[i]);
			}
			f=1;
		}
		if(f==1)
		{
			for(int i=0;i<s.length();i++)
			{
				if(sc[i]=='.')
				cout<<0;
				else
				cout<<sc[i];
			}
			return 0;
		}
	}
	cout<<"No";
}
