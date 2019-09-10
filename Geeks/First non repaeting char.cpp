#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count[26] = {0};
	
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		count[s[i]-'a']++;
	}
	for(int i=0;i<s.length();i++)
	{
		if(count[s[i]-'a']==1)
		{cout<<s[i]; break;}
	}
}
