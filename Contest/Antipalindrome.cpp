#include<bits/stdc++.h>
using namespace std;
int palin(string s)
{
	int n = s.length();
	int i=0;
	/*while(i<=n/2)
	{
		if(s[i]!=s[n-i-1])
		return 0;
		i++;
		
	}*/
	for(int i=0;i<n/2;i++)
	{
		if(s[i]!=s[n-i-1])
		return n;
	}
	return 0;
}
int main()
{
	string s;
	cin>>s;
	int n= s.length();
	int t;
	//cout<<s.length()<<" ";
	int max = palin(s);
	//cout<<max<<" ";
	if(max==n)
	{
		cout<<n;
		return 0;
	}
	else
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			t = palin(s.substr(i,j));
			if(max<t)
			max = t;
		}
	}
	cout<<max;
	return 0;
}
